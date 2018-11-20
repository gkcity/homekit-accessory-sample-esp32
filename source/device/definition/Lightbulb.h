/**
 * Copyright (C) 2013-2015
 *
 * @author jxfengzi@gmail.com
 * @date   2018-11-12
 *
 * @file   Lightbulb.h
 *
 * @remark
 *
 */

#ifndef __Lightbulb_H__
#define __Lightbulb_H__

#include <device/Device.h>

TINY_BEGIN_DECLS


Device * Lightbulb(const char *did, const char *name, const char *ip, const char *setupCode);


TINY_END_DECLS

#endif /* __Lightbulb_H__ */
