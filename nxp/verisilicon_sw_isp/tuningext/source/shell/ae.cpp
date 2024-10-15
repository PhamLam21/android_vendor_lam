/******************************************************************************\
|* Copyright (c) 2020 by VeriSilicon Holdings Co., Ltd. ("VeriSilicon")       *|
|* All Rights Reserved.                                                       *|
|*                                                                            *|
|* The material in this file is confidential and contains trade secrets of    *|
|* of VeriSilicon.  This is proprietary information owned or licensed by      *|
|* VeriSilicon.  No part of this work may be disclosed, reproduced, copied,   *|
|* transmitted, or used in any way for any purpose, without the express       *|
|* written permission of VeriSilicon.                                         *|
|*                                                                            *|
\******************************************************************************/

#include "shell/ae.hpp"

#ifdef APPMODE_NATIVE
#include "calibration/ae.hpp"
#endif

#ifdef APPMODE_V4L2
#include "ioctl/v4l2-ioctl.hpp"
#endif

using namespace sh;

Ae &Ae::process(Json::Value &jQuery, Json::Value &jResponse) {
  Shell::process(jQuery, jResponse);

  int32_t id = jQuery[REST_ID].asInt();

  switch (id) {
  case ConfigGet:
    return configGet(jQuery, jResponse);

  case ConfigSet:
    return configSet(jQuery, jResponse);

  case EcmGet:
    return ecmGet(jQuery, jResponse);

  case EcmSet:
    return ecmSet(jQuery, jResponse);

  case EnableGet:
    return enableGet(jQuery, jResponse);

  case EnableSet:
    return enableSet(jQuery, jResponse);

  case Reset:

    return reset(jQuery, jResponse);
  case StatusGet:
    return statusGet(jQuery, jResponse);

  default:
    throw exc::LogicError(RET_NOTAVAILABLE,
                          "Command implementation is not available");
  }

  return *this;
}

Ae &Ae::configGet(Json::Value &jQuery, Json::Value &jResponse) {
  TRACE_CMD;

#ifdef APPMODE_V4L2
    viv_private_ioctl(IF_AE_G_CFG, jQuery, jResponse);
#endif

#ifdef APPMODE_NATIVE
  clb::Ae::Config config;

  jResponse[REST_RET] = pCamera->pEngine->aeConfigGet(config);

  jResponse[KEY_CLM_TOLERANCE] = config.tolerance;
  jResponse[KEY_DAMPING_OVER] = config.dampingOver;
  jResponse[KEY_DAMPING_UNDER] = config.dampingUnder;
  jResponse[KEY_MODE] = config.mode;
  jResponse[KEY_SET_POINT] = config.setPoint;
  binEncode(config.Weight, jResponse[KEY_WEIGHT]);

  binEncode(config.Weight, jResponse[KEY_WEIGHT]);
#endif

  return *this;
}

Ae &Ae::configSet(Json::Value &jQuery, Json::Value &jResponse) {
  TRACE_CMD;

#ifdef APPMODE_V4L2
    viv_private_ioctl(IF_AE_S_CFG, jQuery, jResponse);
#endif


#ifdef APPMODE_NATIVE
  clb::Ae::Config config;

  binDecode(jQuery[KEY_WEIGHT], config.Weight);

  config.isBypass = false;
  config.tolerance = jQuery[KEY_CLM_TOLERANCE].asFloat();
  config.dampingOver = jQuery[KEY_DAMPING_OVER].asFloat();
  config.dampingUnder = jQuery[KEY_DAMPING_UNDER].asFloat();
  config.mode = (CamEngineAecSemMode_t)jQuery[KEY_MODE].asInt();
  config.setPoint = jQuery[KEY_SET_POINT].asFloat();
  binDecode(jQuery[KEY_WEIGHT], config.Weight);

  jResponse[REST_RET] = pCamera->pEngine->aeConfigSet(config);
#endif

  return *this;
}

Ae &Ae::ecmGet(Json::Value &jQuery, Json::Value &jResponse) {
  TRACE_CMD;

#ifdef APPMODE_V4L2
    viv_private_ioctl(IF_AE_G_ECM, jQuery, jResponse);
#endif

#ifdef APPMODE_NATIVE
  clb::Ae::Ecm ecm;

  jResponse[REST_RET] = pCamera->pEngine->aeEcmGet(ecm);

  jResponse[KEY_AFPS] = ecm.isAfps;
  jResponse[KEY_FLICKER_PERIOD] = ecm.flickerPeriod;
#endif

  return *this;
}

Ae &Ae::ecmSet(Json::Value &jQuery, Json::Value &jResponse) {
  TRACE_CMD;

#ifdef APPMODE_V4L2
    viv_private_ioctl(IF_AE_S_ECM, jQuery, jResponse);
#endif

#ifdef APPMODE_NATIVE
  clb::Ae::Ecm ecm;

  ecm.isAfps = jQuery[KEY_AFPS].asBool();
  ecm.flickerPeriod =
      (CamEngineFlickerPeriod_t)jQuery[KEY_FLICKER_PERIOD].asInt();

  jResponse[REST_RET] = pCamera->pEngine->aeEcmSet(ecm);
#endif

  return *this;
}

Ae &Ae::enableGet(Json::Value &jQuery, Json::Value &jResponse) {
  TRACE_CMD;

#ifdef APPMODE_V4L2
    viv_private_ioctl(IF_AE_G_EN, jQuery, jResponse);
#endif

#ifdef APPMODE_NATIVE
  bool isEnable = false;

  jResponse[REST_RET] = pCamera->pEngine->aeEnableGet(isEnable);

  jResponse[KEY_ENABLE] = isEnable;
#endif

  return *this;
}

Ae &Ae::enableSet(Json::Value &jQuery, Json::Value &jResponse) {
  TRACE_CMD;

#ifdef APPMODE_V4L2
    viv_private_ioctl(IF_AE_S_EN, jQuery, jResponse);
#endif

#ifdef APPMODE_NATIVE
  bool isEnable = jQuery[KEY_ENABLE].asBool();

  jResponse[REST_RET] = pCamera->pEngine->aeEnableSet(isEnable);
#endif

  return *this;
}

Ae &Ae::statusGet(Json::Value &jQuery, Json::Value &jResponse) {
  TRACE_CMD;

#ifdef APPMODE_V4L2
    viv_private_ioctl(IF_AE_G_STATUS, jQuery, jResponse);
#endif

#ifdef APPMODE_NATIVE
  clb::Ae::Status status;

  jResponse[REST_RET] = pCamera->pEngine->aeStatus(status);

  binEncode(status.histogram, jResponse[KEY_HIST]);
  binEncode(status.luminance, jResponse[KEY_LUMA]);
  binEncode(status.objectRegion, jResponse[KEY_OBJECT_REGION]);
#endif

  return *this;
}

Ae &Ae::reset(Json::Value &jQuery, Json::Value &jResponse) {
  TRACE_CMD;

#ifdef APPMODE_V4L2
    viv_private_ioctl(IF_AE_RESET, jQuery, jResponse);
#endif

#ifdef APPMODE_NATIVE
  jResponse[REST_RET] = pCamera->pEngine->aeReset();
#endif

  return *this;
}
