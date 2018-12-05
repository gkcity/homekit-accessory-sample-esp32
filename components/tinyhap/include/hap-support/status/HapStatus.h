/**
 * Copyright (C) 2013-2015
 *
 * @author jxfengzi@gmail.com
 * @date   2013-11-19
 *
 * @file   HapStatus.h
 *
 * @remark
 *
 */

#ifndef __HAP_STATUS_H__
#define __HAP_STATUS_H__

#include "tiny_base.h"

TINY_BEGIN_DECLS


typedef enum _HapStatus
{
    HAP_OK = 0,

    // Request denied due to insufficient privileges.
    HAP_REQUEST_DEFINED = -70401,

    // Unable to communicate with requested service, e.g. the power to the accessory was turned off.
    HAP_UNABLE_COMMUNICATE = -70402,

    // Resource is busy, try again.
    HAP_BUSY = -70403,

    // Cannot write to read only characteristic.
    HAP_CANNOT_WRITE = -70404,

    // Cannot read from a write only characteristic.
    HAP_CANNOT_READ = -70405,

    // Notification is not supported for characteristic.
    HAP_CANNOT_NOTIFY = -70406,

    // Out of resources to process request.
    HAP_OUT_OF_RESOURCES = -70407,

    // Operation timed out.
    HAP_TIMEOUT = -70408,

    // Resource does not exist.
    HAP_RESOURCE_NOT_EXIST = -70409,

    // Accessory received an invalid value in a write request.
    HAP_INVALID_VALUE = -70410,

    // Insufficient Authorization.
    HAP_INSUFFICIENT_AUTHORIZATION = -70411,
} HapStatus;


TINY_END_DECLS

#endif /* __HAP_STATUS_H__ */