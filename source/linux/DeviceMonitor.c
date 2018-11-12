/**
* Copyright (C) 2013-2015
*
* @author jxfengzi@gmail.com
* @date   2013-11-19
*
* @file   DeviceMonitor.c
*
* @remark
*
*/

#include "DeviceMonitor.h"
#include <TinyThread.h>
#include <tiny_sleep.h>
#include <HttpClient.h>
#include <JsonObject.h>
//#include <client/WebcmdClient.h>

static TinyThread *_thread = NULL;
static bool _running = true;
static bool _fan_on = true;
static uint16_t g_port = 0;

static void Fan_On_Changed(const char *did)
{
    _fan_on = ! _fan_on;
    JsonValue *v = JsonValue_NewBoolean(_fan_on);
    if (v != NULL)
    {
//        WebcmdClient_SendPropertyChanged(g_port, did, 2, 1, v);
        JsonValue_Delete(v);
    }
}

static void _loop(void *param)
{
    const char *did = (const char *) param;

    _running = true;

    while (_running)
    {
        tiny_sleep(1000 * 10);
        Fan_On_Changed(did);
    }
}

TinyRet StartDeviceMonitor(const char *did, uint16_t port)
{
    TinyRet ret = TINY_RET_OK;

    do
    {
        g_port = port;

        if (_thread != NULL)
        {
            ret = TINY_RET_E_STARTED;
            break;
        }

        _thread = TinyThread_New();
        if (_thread == NULL)
        {
            ret = TINY_RET_E_NEW;
            break;
        }

        ret = TinyThread_Initialize(_thread, _loop, (void *)did, "monitor");
        if (RET_FAILED(ret))
        {
            break;
        }

        if (! TinyThread_Start(_thread))
        {
            ret = TINY_RET_E_INTERNAL;
            break;
        }
    } while (false);

    return ret;
}

TinyRet StopDeviceMonitor(void)
{
    TinyRet ret = TINY_RET_OK;

    do
    {
        if (_thread == NULL)
        {
            ret = TINY_RET_E_STOPPED;
            break;
        }

        if (_thread->status != ThreadRunning)
        {
            ret = TINY_RET_E_STATUS;
            break;
        }

        _running = false;

        if (!TinyThread_Join(_thread))
        {
            ret = TINY_RET_E_INTERNAL;
        }
    } while (false);

    return ret;
}
