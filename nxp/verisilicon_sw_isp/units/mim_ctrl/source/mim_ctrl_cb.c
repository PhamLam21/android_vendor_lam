/******************************************************************************\
|* Copyright 2010, Dream Chip Technologies GmbH. used with permission by      *|
|* VeriSilicon.                                                               *|
|* Copyright (c) <2020> by VeriSilicon Holdings Co., Ltd. ("VeriSilicon")     *|
|* All Rights Reserved.                                                       *|
|*                                                                            *|
|* The material in this file is confidential and contains trade secrets of    *|
|* of VeriSilicon.  This is proprietary information owned or licensed by      *|
|* VeriSilicon.  No part of this work may be disclosed, reproduced, copied,   *|
|* transmitted, or used in any way for any purpose, without the express       *|
|* written permission of VeriSilicon.                                         *|
|*                                                                            *|
\******************************************************************************/

/* VeriSilicon 2020 */

/**
 * @mim_ctrl_cb.c
 *
 * @brief
 *   ADD_DESCRIPTION_HERE
 *
 *****************************************************************************/

#include <ebase/trace.h>
#include <common/return_codes.h>

#include <bufferpool/media_buffer.h>
#include <bufferpool/media_buffer_pool.h>
#include <bufferpool/media_buffer_queue_ex.h>

#include "mim_ctrl_cb.h"
#include "mim_ctrl.h"


/******************************************************************************
 * local macro definitions
 *****************************************************************************/
CREATE_TRACER( MIM_CTRL_CB_INFO , "MIM-CTRL-CB: ", INFO      , 0 );
CREATE_TRACER( MIM_CTRL_CB_WARN , "MIM-CTRL-CB: ", WARNING   , 1 );
CREATE_TRACER( MIM_CTRL_CB_ERROR, "MIM-CTRL-CB: ", ERROR     , 1 );



/******************************************************************************
 * MimCtrlDmaCompletionCb()
 *****************************************************************************/
void MimCtrlDmaCompletionCb
(
	const CamerIcCommandId_t    cmdId,
	const RESULT                result,
	void                        *pParam,
	void                        *pUserContext
)
{
    MimCtrlContext_t *pMimCtrlCtx = (MimCtrlContext_t *)pUserContext;

    TRACE( MIM_CTRL_CB_INFO, "%s: (enter)\n", __func__ );

    if ( (pMimCtrlCtx != NULL) && (pParam != NULL) )
    {
        switch ( cmdId )
        {
            case CAMERIC_MI_COMMAND_DMA_TRANSFER:
                {
                    RESULT result = MimCtrlSendCommand( pMimCtrlCtx, MIM_CTRL_CMD_DMA_TRANSFER );
                    DCT_ASSERT( (result == RET_SUCCESS) );

                    pMimCtrlCtx->dmaResult = result;
                    break;
                }

            default:
                {
                     TRACE( MIM_CTRL_CB_WARN, "%s: (unsupported command)\n", __func__ );
                      break;
                }
        }
    }

    TRACE( MIM_CTRL_CB_INFO, "%s: (exit)\n", __func__ );
}

