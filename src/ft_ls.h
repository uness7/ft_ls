#ifndef FT_LS_H
#define FT_LS_H

# include <sys/stat.h>
# include "../libft/libft.h"
# include <stdbool.h>

/* ------------ Data Structures ------------ */
typedef struct s_file {
	char            *name;
	char            *path;
	struct stat     stats;
	struct s_file   *next;
} t_file;

typedef struct s_opt {
	bool	all;
	bool	list;
	bool	recursive;
	bool	reverse;
	bool	time;
} t_opt;

/* ------------ Functions ------------ */
void	parse_command(char** args);

#endif
