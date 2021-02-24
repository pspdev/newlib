#ifndef _SYS_DIRENT_H
#define _SYS_DIRENT_H

typedef struct __dirdesc {
	int	dd_fd;
	char	*dd_buf;
} DIR;

# define __dirfd(dp)	((dp)->dd_fd)

#include <sys/stat.h>

#undef  MAXNAMLEN	/* from unistd.h */
#define MAXNAMLEN	255

#define d_ino	d_fileno	/* compatibility */

struct dirent {
	struct stat d_stat;
	char d_name[MAXNAMLEN + 1];
};

#endif