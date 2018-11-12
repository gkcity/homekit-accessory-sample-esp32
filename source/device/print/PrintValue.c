/**
* Copyright (C) 2013-2015
*
* @author jxfengzi@gmail.com
* @date   2013-11-19
*
* @file   PrintValue.c
*
* @remark
*
*/

#include "PrintValue.h"

static void printJsonString(JsonString *value)
{
    printf("value: %s\n", value->value);
}

static void printJsonNumber(JsonNumber *value)
{
    if (value->type == JSON_NUMBER_INTEGER)
    {
        printf("value: %ld\n", value->value.intValue);
    }
    else
    {
        printf("value: %f\n", value->value.floatValue);
    }
}

static void printJsonBoolean(JsonBoolean *value)
{
    printf("value: %s\n", value->value ? "true" : "false");
}

void printValue(JsonValue *value)
{
    switch (value->type)
    {
        case JSON_STRING:
            printJsonString(value->data.string);
            break;

        case JSON_NUMBER:
            printJsonNumber(value->data.number);
            break;

        case JSON_BOOLEAN:
            printJsonBoolean(value->data.boolean);
            break;

        default:
            printf("value invalid: %d\n", value->type);
            break;
    }
}