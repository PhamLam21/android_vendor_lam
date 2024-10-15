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

#ifndef _IOCTL_CMDS_H_
#define _IOCTL_CMDS_H_

#define IF_AE_S_CFG "ae.s.cfg"
#define IF_AE_G_CFG "ae.g.cfg"
#define IF_AE_S_ECM "ae.s.ecm"
#define IF_AE_G_ECM "ae.g.ecm"
#define IF_AE_S_EN "ae.s.en"
#define IF_AE_G_EN "ae.g.en"
#define IF_AE_RESET "ae.reset"
#define IF_AE_S_ISO "ae.s.sensitivity"
#define IF_AE_G_ISO "ae.g.sensitivity"
#define IF_AE_G_STATUS "ae.g.status"
#define IF_AF_S_CFG "af.s.cfg"
#define IF_AF_G_CFG "af.g.cfg"
#define IF_AF_S_EN "af.s.en"
#define IF_AF_G_EN "af.g.en"
#define IF_AF_G_AVI "af.g.available"
#define IF_AVS_S_CFG "avs.s.cfg"
#define IF_AVS_G_CFG "avs.g.cfg"
#define IF_AVS_S_EN "avs.s.en"
#define IF_AVS_G_EN "avs.g.en"
#define IF_AWB_S_CFG "awb.s.cfg"
#define IF_AWB_G_CFG "awb.g.cfg"
#define IF_AWB_S_EN "awb.s.en"
#define IF_AWB_G_EN "awb.g.en"
#define IF_AWB_RESET "awb.reset"
#define IF_AWB_S_MEASWIN "awb.s.measwin"
#define IF_AWB_G_STATUS "awb.g.status"
#define IF_AWB_G_ILLUMPRO "awb.g.illumpro"
#define IF_BLS_S_CFG "bls.s.cfg"
#define IF_BLS_G_CFG "bls.g.cfg"
#define IF_CAC_S_EN "cac.s.en"
#define IF_CAC_G_EN "cac.g.en"
#define IF_CNR_S_CFG "cnr.s.cfg"
#define IF_CNR_G_CFG "cnr.g.cfg"
#define IF_CNR_S_EN "cnr.s.en"
#define IF_CNR_G_EN "cnr.g.en"
#define IF_CPROC_S_CFG "cproc.s.cfg"
#define IF_CPROC_G_CFG "cproc.g.cfg"
#define IF_CPROC_S_EN "cproc.s.en"
#define IF_CPROC_G_EN "cproc.g.en"
#define IF_CPROC_S_COEFF "cproc.s.coeff"
#define IF_DEMOSAIC_S_CFG "dmsc.s.cfg"
#define IF_DEMOSAIC_G_CFG "dmsc.g.cfg"
#define IF_DEMOSAIC_S_EN "demosaic.s.en"
#define IF_DEMOSAIC_G_EN "demosaic.g.en"
#define IF_2DNR_S_CFG "2dnr.s.cfg"
#define IF_2DNR_G_CFG "2dnr.g.cfg"
#define IF_2DNR_S_EN "2dnr.s.en"
#define IF_2DNR_G_EN "2dnr.g.en"
#define IF_2DNR_RESET "2dnr.reset"
#define IF_2DNR_S_TBL "2dnr.s.tbl"
#define IF_3DNR_S_CFG "3dnr.s.cfg"
#define IF_3DNR_G_CFG "3dnr.g.cfg"
#define IF_3DNR_S_EN "3dnr.s.en"
#define IF_3DNR_G_EN "3dnr.g.en"
#define IF_3DNR_RESET "3dnr.reset"
#define IF_3DNR_S_TBL "3dnr.s.tbl"
#define IF_DPCC_S_EN "dpcc.s.en"
#define IF_DPCC_G_EN "dpcc.g.en"
#define IF_DPF_S_CFG "dpf.s.cfg"
#define IF_DPF_G_CFG "dpf.g.cfg"
#define IF_DPF_S_EN "dpf.s.en"
#define IF_DPF_G_EN "dpf.g.en"
#define IF_EC_S_CFG "ec.s.cfg"
#define IF_EC_G_CFG "ec.g.cfg"
#define IF_EC_G_STATUS "ec.g.status"
#define IF_EE_S_CFG "ee.s.cfg"
#define IF_EE_G_CFG "ee.g.cfg"
#define IF_EE_S_EN "ee.s.en"
#define IF_EE_G_EN "ee.g.en"
#define IF_EE_RESET "ee.reset"
#define IF_EE_S_TBL "ee.s.tbl"
#define IF_FILTER_S_CFG "filter.s.cfg"
#define IF_FILTER_G_CFG "filter.g.cfg"
#define IF_FILTER_S_EN "filter.s.en"
#define IF_FILTER_G_EN "filter.g.en"
#define IF_FILTER_S_TBL "filter.s.tbl"
#define IF_FILTER_G_TBL "filter.g.tbl"
#define IF_FILTER_G_STATUS "filter.g.status"
#define IF_GC_S_CURVE "gc.s.curve"
#define IF_GC_G_CURVE "gc.g.curve"
#define IF_GC_S_CFG "gc.s.cfg"
#define IF_GC_G_CFG "gc.g.cfg"
#define IF_GC_S_EN "gc.s.en"
#define IF_GC_G_EN "gc.g.en"
#define IF_HDR_S_CFG "hdr.s.cfg"
#define IF_HDR_G_CFG "hdr.g.cfg"
#define IF_HDR_S_EN "hdr.s.en"
#define IF_HDR_G_EN "hdr.g.en"
#define IF_HDR_RESET "hdr.reset"
#define IF_IE_S_CFG "ie.s.cfg"
#define IF_IE_G_CFG "ie.g.cfg"
#define IF_IE_S_EN "ie.s.en"
#define IF_IE_G_EN "ie.g.en"
#define IF_LSC_S_CFG "lsc.s.cfg"
#define IF_LSC_S_EN "lsc.s.en"
#define IF_LSC_G_EN "lsc.g.en"
#define IF_LSC_G_STATUS "lsc.g.status"
#define IF_SIMP_S_CFG "simp.s.cfg"
#define IF_SIMP_S_EN "simp.s.en"
#define IF_WB_S_CFG "wb.s.cfg"
#define IF_WB_G_CFG "wb.g.cfg"
#define IF_WB_S_GAIN "wb.s.gain"
#define IF_WB_S_CCM "wb.s.ccm"
#define IF_WB_S_OFFSET "wb.s.offset"
#define IF_WDR_S_CFG "wdr.s.cfg"
#define IF_WDR_G_CFG "wdr.g.cfg"
#define IF_WDR_S_EN "wdr.s.en"
#define IF_WDR_G_EN "wdr.g.en"
#define IF_WDR_G_STATUS "wdr.g.status"
#define IF_WDR_RESET "wdr.reset"
#define IF_WDR_S_TBL "wdr.s.tbl"
#define IF_WDR_G_TBL "wdr.g.tbl"
#define IF_SENSOR_QUERY "sensor.query"
#define IF_SENSOR_G_MODE "sensor.g.mode"
#define IF_SENSOR_S_MODE "sensor.s.mode"
#define IF_SENSOR_G_RESW "sensor.g.resw"
#define IF_SENSOR_G_RESH "sensor.g.resh"
#define IF_SENSOR_G_REG  "sensor.g.reg"
#define IF_SENSOR_S_REG  "sensor.s.reg"
#define IF_SENSOR_G_SEC  "sensor.g.sec"
#define IF_SENSOR_S_SEC  "sensor.s.sec"
#define IF_SENSOR_S_TESTPAT "sensor.s.testpat"
#define IF_SENSOR_INFO   "sensor.info"

#define IF_DWE_G_PARAMS "dwe.g.params"
#define IF_DWE_S_PARAMS "dwe.s.params"
#define IF_DWE_G_HFLIP  "dwe.g.hflip"
#define IF_DWE_S_HFLIP  "dwe.s.hflip"
#define IF_DWE_G_VFLIP  "dwe.g.vflip"
#define IF_DWE_S_VFLIP  "dwe.s.vflip"
#define IF_DWE_G_BYPASS "dwe.g.bypass"
#define IF_DWE_S_BYPASS "dwe.s.bypass"
#define IF_DWE_G_MODE   "dwe.g.mode"
#define IF_DWE_S_MODE   "dwe.s.mode"
#define IF_DWE_G_MAT    "dwe.g.mat"
#define IF_DWE_S_MAT    "dwe.s.mat"
#define IF_DWE_G_TYPE   "dwe.g.type"
#define IF_DWE_S_TYPE   "dwe.s.type"
#define IF_CAPTURE "capture"
#define IF_DWE_S_CFG_FILE "dwe.s.cfg.file"
#define IF_DWE_G_CFG_FILE "dwe.g.cfg.file"
#define IF_S_FPS "s.fps"
#define IF_G_FPS "g.fps"

#define IF_OUT_FMT "out.format"
#define IF_G_RESOLUTION       "device.g.resolution"
#define IF_SENSOR_LIB_PRELOAD "sensor.lib.preload"
#define IF_PIPELINE_S_WARM_UP "pipeline.s.warm.up"
#define IF_PIPELINE_G_WARM_UP "pipeline.g.warm.up"
#define IF_PIPELINE_S_SMP_MODE "pipeline.s.smp.mode"
#define IF_PIPELINE_G_SMP_MODE "pipeline.g.smp.mode"
#define IF_PIPELINE_S_DWE_ONOFF "pipeline.s.dwe.onoff"
#define IF_PIPELINE_G_DWE_ONOFF "pipeline.g.dwe.onoff"
#define IF_PIPELINE_S_TESTPAT "pipeline.s.testpat"
#define IF_PIPELINE_G_TESTPAT "pipeline.g.testpat"
#define IF_PIPELINE_S_RES_IS_OUT "pipeline.s.res.is.out"
#define IF_PIPELINE_G_RES_IS_OUT "pipeline.g.res.is.out"
#define IF_PIPELINE_S_RES_MP_OUT "pipeline.s.res.mp.out"
#define IF_PIPELINE_G_RES_MP_OUT "pipeline.g.res.mp.out"
#define IF_PIPELINE_S_MP_FMT "pipeline.s.mp.fmt"
#define IF_PIPELINE_G_MP_FMT "pipeline.g.mp.fmt"
#define IF_PIPELINE_QUERY "pipeline.query"
#define IF_PIPELINE_CFG_STATUS "pipeline.cfg.status"
#define IF_PIPELINE_S_3A_LOCK  "pipeline.s.3a.lock"
#define IF_PIPELINE_G_3A_LOCK  "pipeline.g.3a.lock"

#define IF_CALIBRATION_GET "calibration.get"
#define IF_CALIBRATION_SET "calibration.set"

#define IF_INPUTINFO "sensor.input.info"
#define IF_INPUTSWITCH "sensor.input.switch"

#define IF_MODULE_DATA_PARSE "module.parse.data"
#define IF_MODULE_DATA_G "module.g.data"


#endif  // _IOCTL_CMDS_H_
