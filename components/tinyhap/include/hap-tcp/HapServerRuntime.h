/**
 * Copyright (C) 2013-2015
 *
 * @author jxfengzi@gmail.com
 * @date   2013-11-19
 *
 * @file   HapServerRuntime.h
 *
 * @remark
 *
 */

#ifndef __HAP_SERVER_RUNTIME_H__
#define __HAP_SERVER_RUNTIME_H__

#include <IotRuntime.h>
#include "HapPersistence.h"

TINY_BEGIN_DECLS


TINY_LOR
IotRuntime * HapServerRuntime_New(HapPersistence *persistence);



TINY_END_DECLS

#endif /* __HAP_SERVER_RUNTIME_H__ */