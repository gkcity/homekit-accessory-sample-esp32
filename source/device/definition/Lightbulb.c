/**
 * Copyright (C) 2013-2015
 *
 * @author jxfengzi@gmail.com
 * @date   2018-11-12
 *
 * @file   Lightbulb.c
 *
 * @remark
 *
 */

#include <tiny_snprintf.h>
#include "Lightbulb.h"
#include "../handler/OnPropertySet.h"
#include "../handler/OnPropertyGet.h"
#include "../initializer/InitializeConfiguration.h"
#include "S_1_AccessoryInformation.h"
#include "S_8_Lightbulb.h"

Device * Lightbulb(const char *did, const char *name, const char *ip, const char *setupCode)
{
    Device *thiz = NULL;

    do
    {
        if (did == NULL || name == NULL || ip == NULL || setupCode == NULL)
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

        if (RET_FAILED(TinyList_AddTail(&thiz->services, S_1_AccessoryInformation())))
        {
            Device_Delete(thiz);
            thiz = NULL;
            break;
        }

        if (RET_FAILED(TinyList_AddTail(&thiz->services, S_8_Lightbulb())))
        {
            Device_Delete(thiz);
            thiz = NULL;
            break;
        }

        InitializeConfiguration(&thiz->config, did, name, ip, setupCode);
    } while (false);

    return thiz;
}