/**
* Copyright (C) 2013-2015
*
* @author jxfengzi@gmail.com
* @date   2013-11-19
*
* @file   InitializeConfiguration.h
*
* @remark
*
*/

#ifndef __InitializeConfiguration_H__
#define __InitializeConfiguration_H__

#include <device/config/DeviceConfig.h>

TINY_BEGIN_DECLS


void InitializeConfiguration(DeviceConfig *thiz, const char *did, const char *name, const char *ip, const char *setupCode);


TINY_END_DECLS

#endif /* __InitializeConfiguration_H__ */