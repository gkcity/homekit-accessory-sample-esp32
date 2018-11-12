/**
 * Copyright (C) 2013-2015
 *
 * @author jxfengzi@gmail.com
 * @date   2013-11-19
 *
 * @file   Switch.c
 *
 * @remark
 *
 */

#include <tiny_snprintf.h>
#include "Switch.h"
#include "S_1_AccessoryInformation.h"
#include "S_2_Switch.h"
#include "../handler/OnPropertySet.h"
#include "../handler/OnActionInvoke.h"
#include "../handler/OnPropertyGet.h"
#include "../initializer/InitializeConfiguration.h"

Device * Switch(const char *did, const char *name, const char *ip, const char *pin)
{
    Device *thiz = NULL;

    do
    {
        if (did == NULL || name == NULL)
        {
            break;
        }

        thiz = Device_New();
        if (thiz == NULL)
        {
            break;
        }

        thiz->onGet = OnPropertyGet;
        thiz->onSet = OnPropertySet;
        thiz->onInvoke = OnActionInvoke;

        if (RET_FAILED(TinyList_AddTail(&thiz->services, S_1_AccessoryInformation())))
        {
            Device_Delete(thiz);
            thiz = NULL;
            break;
        }

        if (RET_FAILED(TinyList_AddTail(&thiz->services, S_2_Switch())))
        {
            Device_Delete(thiz);
            thiz = NULL;
            break;
        }

        InitializeConfiguration(&thiz->config, did, name, ip, pin);
    } while (false);

    return thiz;
}