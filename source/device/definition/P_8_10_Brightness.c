/**
 * Copyright (C) 2013-2015
 *
 * @author jxfengzi@gmail.com
 * @date   2018-11-12
 *
 * @file   P_8_10_Brightness.h
 *
 * @remark
 *
 */

#include "P_8_10_Brightness.h"

static TinyRet P_8_10_Brightness_SetValueRange(Property *thiz)
{
    TinyRet ret = TINY_RET_OK;
    JsonValue * min = NULL;
    JsonValue * max = NULL;
    JsonValue * step = NULL;

    do
    {
        min = JsonValue_NewInteger(0);
        if (min == NULL)
        {
            ret = TINY_RET_E_NEW;
            break;
        }

        max = JsonValue_NewInteger(100);
        if (min == NULL)
        {
            ret = TINY_RET_E_NEW;
            break;
        }

        step = JsonValue_NewInteger(1);
        if (min == NULL)
        {
            ret = TINY_RET_E_NEW;
            break;
        }

        thiz->valueRange = ValueRange_New(min, max, step);
        if (thiz->valueRange == NULL)
        {
            ret = TINY_RET_E_NEW;
            break;
        }
    } while (false);

    if (min != NULL)
    {
        JsonValue_Delete(min);
    }

    if (max != NULL)
    {
        JsonValue_Delete(max);
    }

    if (step != NULL)
    {
        JsonValue_Delete(step);
    }

    return ret;
}

Property * P_8_10_Brightness(void)
{
    Property *thiz = NULL;

    do
    {
        thiz = Property_NewInstance(10, "homekit-spec", "brightness", 0x00000008, NULL);
        if (thiz == NULL)
        {
            break;
        }

        thiz->access = ACCESS_READ | ACCESS_WRITE | ACCESS_NOTIFY;
        thiz->format = FORMAT_INT32;

        if (RET_FAILED(P_8_10_Brightness_SetValueRange(thiz)))
        {
            Property_Delete(thiz);
            break;
        }
    } while (false);

    return thiz;
}