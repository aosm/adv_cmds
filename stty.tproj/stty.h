/* 
 * Copyright (c) 1995 NeXT Computer, Inc. All Rights Reserved
 *
 * Copyright (c) 1991, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * The NEXTSTEP Software License Agreement specifies the terms
 * and conditions for redistribution.
 *
 *
 *	@(#)stty.h	8.1 (Berkeley) 5/31/93
 */

#include <sys/ioctl.h>
#include <termios.h>

struct info {
	int fd;					/* file descriptor */
	int ldisc;				/* line discipline */
	int off;				/* turn off */
	int set;				/* need set */
	int wset;				/* need window set */
	char *arg;				/* argument */
	struct termios t;			/* terminal info */
	struct winsize win;			/* window info */
};

struct cchar {
	char *name;
	int sub;
	u_char def;
};

enum FMT { NOTSET, GFLAG, BSD, POSIX };

#define	LINELENGTH	72
