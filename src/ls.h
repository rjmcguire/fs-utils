/*	$NetBSD: ls.h,v 1.1 2009/03/23 21:03:58 stacktic Exp $	*/
/* from */
/*	NetBSD: ls.h,v 1.17 2009/02/14 08:02:04 lukem Exp	*/

/*
 * Copyright (c) 1989, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Michael Fischbein.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)ls.h	8.1 (Berkeley) 5/31/93
 */

#include <fsu_fts.h>

#define FTSENT FSU_FTSENT

#define NO_PRINT	1

extern long blocksize;		/* block size units */

extern int f_accesstime;	/* use time of last access */
extern int f_flags;		/* show flags associated with a file */
extern int f_grouponly;		/* long listing without owner */
extern int f_humanize;		/* humanize size field */
extern int f_inode;		/* print inode */
extern int f_longform;		/* long listing format */
extern int f_octal;		/* print octal escapes for nongraphic characters */
extern int f_octal_escape;	/* like f_octal but use C escapes if possible */
extern int f_sectime;		/* print the real time for all files */
extern int f_size;		/* list size in short listing */
extern int f_statustime;	/* use time of last mode change */
extern int f_type;		/* add type character for non-regular files */
extern int f_typedir;		/* add type character for directories */
extern int f_nonprint;		/* show unprintables as ? */

typedef struct {
	FTSENT *list;
	uint64_t btotal;
	uint64_t stotal;
	int entries;
	unsigned int maxlen;
	int s_block;
	int s_flags;
	int s_group;
	int s_inode;
	int s_nlink;
	int s_size;
	int s_user;
	int s_major;
	int s_minor;
} DISPLAY;

typedef struct {
	char *user;
	char *group;
	char *flags;
	char data[1];
} NAMES;
