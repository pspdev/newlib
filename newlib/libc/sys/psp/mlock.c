/*
 * PSP Software Development Kit - http://www.pspdev.org
 * -----------------------------------------------------------------------
 * Licensed under the BSD license, see LICENSE in PSPSDK root for details.
 *
 * libcglue.c - Newlib-compatible system calls.
 *
 * Copyright (c) 2005 Marcus R. Brown <mrbrown@ocgnet.org>
 * Copyright (c) 2005 James Forshaw <tyranid@gmail.com>
 * Copyright (c) 2005 John Kelley <ps2dev@kelley.ca>
 * Copyright (c) 2005 Jim Paris <jim@jtan.com>
 * Copyright (c) 2021 Francisco J Trujillo <fjtrujy@gmail.com>
 * 
 */

#include <stdint.h>

#ifdef F__lock_unlock

void __malloc_lock(struct _reent *ptr)
{
	_internal_malloc_lock();
}

void __malloc_unlock(struct _reent *ptr)
{
	_internal_malloc_unlock();
}
#endif
