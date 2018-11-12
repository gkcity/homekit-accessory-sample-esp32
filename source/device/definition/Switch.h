/**
 * Copyright (C) 2013-2015
 *
 * @author jxfengzi@gmail.com
 * @date   2013-11-19
 *
 * @file   Switch.h
 *
 * @remark
 *
 */

#ifndef __Switch_H__
#define __Switch_H__

#include <device/Device.h>

TINY_BEGIN_DECLS


Device * Switch(const char *did, const char *name, const char *ip, const char *pin);


TINY_END_DECLS

#endif /* __Switch_H__ */
