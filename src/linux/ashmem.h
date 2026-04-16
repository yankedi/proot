/*
 * Stub header file for ashmem on non-Android Linux systems
 * This allows PRoot to compile on standard Linux distributions
 */

#ifndef _LINUX_ASHMEM_H_STUB
#define _LINUX_ASHMEM_H_STUB

#include <sys/ioctl.h>
#include <stddef.h>

/* Ashmem ioctl commands */
#define ASHMEM_SET_SIZE      _IOW('a', 3, size_t)
#define ASHMEM_GET_SIZE      _IOR('a', 4, size_t)

#endif /* _LINUX_ASHMEM_H_STUB */


