.PATH: ${.CURDIR:H}/common_source

BINDIR=	/usr/bin

PACKAGE=lp
PROG=	lprm
BINOWN=	root
BINGRP=	daemon
BINMODE= 6555

CFLAGS+= -I${.CURDIR:H}/common_source

LIBADD=	lpr

.include <bsd.prog.mk>
