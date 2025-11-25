#ifndef FT_LS_H
#define FT_LS_H

#include <sys/stat.h>
#include "../libft/libft.h"

/* ------------ Data Structures ------------ */
typedef struct s_file {
	char            *name;
	char            *path;
	struct stat     stats;
	struct s_file   *next;
} t_file;

typedef struct s_opt {
	int	all; // 1=true, 0=false
	int	list;
	int	recursive;
	int	reverse;
	int	time;
} t_opt;

/* ------------ Functions ------------ */
void	parse_command(char** args);

#endif
