/**
 * Copyright (C) 2013-2015
 *
 * @author jxfengzi@gmail.com
 * @date   2018-11-12
 *
 * @file   S_8_Lightbulb.c
 *
 * @remark
 *
 */

#include "S_8_Lightbulb.h"
#include "P_8_9_On.h"
#include "P_8_10_Brightness.h"

Service * S_8_Lightbulb(void)
{
    Service *thiz = NULL;

    do
    {
        thiz = Service_NewInstance(8, "homekit-spec", "lightbulb", 0x00000043, NULL);
        if (thiz == NULL)
        {
            break;
        }

        if (RET_FAILED(TinyList_AddTail(&thiz->properties, P_8_9_On())))
        {
            Service_Delete(thiz);
            thiz = NULL;
            break;
        }

        if (RET_FAILED(TinyList_AddTail(&thiz->properties, P_8_10_Brightness())))
        {
            Service_Delete(thiz);
            thiz = NULL;
            break;
        }
    } while (false);

    return thiz;
}