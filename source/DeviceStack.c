/**
 * Copyright (C) 2013-2015
 *
 * @author jxfengzi@gmail.com
 * @date   2013-11-19
 *
 * @file   DeviceStack.c
 *
 * @remark
 *
 */

#include <tiny_malloc.h>
#include <tiny_log.h>
#include <IotLauncher.h>
#include <HapServerRuntime.h>
#include "DeviceStack.h"
#include "persistence/HapPersistenceImpl.h"

#define TAG "DeviceStack"

static IotLauncher *_launcher = NULL;
static BaseType_t _taskId = 0;

static void _loop(void *param)
{
    TinyRet ret = IotLauncher_Run((IotLauncher *) param);
    if (RET_FAILED(ret))
    {
        LOG_D(TAG, "IotLauncher_Run FAILED: %d", ret);
    }
}

TinyRet StartDeviceStack(Device *device, uint16_t *port)
{
    TinyRet ret = TINY_RET_OK;
    IotLauncher *launcher = NULL;

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

        launcher = IotLauncher_NewRuntime(device, runtime, NULL, NULL, NULL);
        if (launcher == NULL)
        {
            ret = TINY_RET_E_NEW;
            break;
        }

        _loop(_launcher);
    } while (false);

    return ret;
}

TinyRet StopDeviceStack(void)
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