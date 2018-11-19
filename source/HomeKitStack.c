/**
 * Copyright (C) 2013-2015
 *
 * @author jxfengzi@gmail.com
 * @date   2013-11-19
 *
 * @file   HomeKitStack.c
 *
 * @remark
 *
 */

#include <tiny_malloc.h>
#include <tiny_log.h>
#include <IotLauncher.h>
#include <HapServerRuntime.h>
#include "HomeKitStack.h"
#include "persistence/HapPersistenceImpl.h"

#define TAG "HomeKitStack"

static IotLauncher *_launcher = NULL;
static BaseType_t _taskId = 0;

TinyRet StartHomeKit(Device *device, uint16_t *port)
{
    TinyRet ret = TINY_RET_OK;

    do
    {
        if (_taskId != 0)
        {
            ret = TINY_RET_E_STARTED;
            break;
        }

        IotRuntime *runtime = HapServerRuntime_New(HapPersistenceImpl_GetInstance());
        if (runtime == NULL)
        {
            ret = TINY_RET_E_NEW;
            break;
        }

        _launcher = IotLauncher_NewRuntime(device, runtime, NULL, NULL, NULL);
        if (_launcher == NULL)
        {
            ret = TINY_RET_E_NEW;
            break;
        }

        IotLauncher_Run(_launcher);
        if (RET_FAILED(ret))
        {
            LOG_D(TAG, "IotLauncher_Run FAILED: %d", TINY_RET_CODE(ret));
        }
    } while (false);

    return ret;
}

TinyRet StopHomeKit(void)
{
    TinyRet ret = TINY_RET_OK;

    do
    {
        if (_taskId == 0)
        {
            ret = TINY_RET_E_STOPPED;
            break;
        }

        ret = IotLauncher_Stop(_launcher);
        if (RET_FAILED(ret))
        {
            break;
        }
    } while (false);

    return ret;
}