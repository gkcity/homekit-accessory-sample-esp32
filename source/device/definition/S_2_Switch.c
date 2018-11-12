/**
 * Copyright (C) 2013-2015
 *
 * @author jxfengzi@gmail.com
 * @date   2013-11-19
 *
 * @file   S_2_Switch.c
 *
 * @remark
 *
 */

#include "S_2_Switch.h"
#include "P_2_1_On.h"
#include "P_2_2_Name.h"

Service * S_2_Switch(void)
{
    Service *thiz = NULL;

    do
    {
        thiz = Service_NewInstance(2, "homekit-spec", "switch", 0x00000049, NULL);
        if (thiz == NULL)
        {
            break;
        }

        if (RET_FAILED(TinyList_AddTail(&thiz->properties, P_2_1_On())))
        {
            Service_Delete(thiz);
            thiz = NULL;
            break;
        }

        if (RET_FAILED(TinyList_AddTail(&thiz->properties, P_2_2_Name())))
        {
            Service_Delete(thiz);
            thiz = NULL;
            break;
        }
    } while (false);

    return thiz;
}