/*
** @author yzioual
*/

# include "ft_ls.h"

/// returns the size of a 2d array of type char.
int
get_double_arr_size(char **av) {
	int	length;

	length = 0;
	while (*av != NULL) {
		length++;
		av++;
	}
	return (length);
}

/// checks if the word passed in is an option.
bool
is_ops(char *str) {
	if (str == NULL) return (false);
	return (str[0] == '-');
}

/// Returns the number of paths were provided with ls.
int
get_len_paths_arr(const char **av) {
	int res = 0;
	int	len = 0;
	int	i = 1;

	len = get_double_arr_size(av);
	while (i < len) {
		if (!is_ops(av[i])) {
			res++;
		} 
		i++;
	}
	return (res);
}

t_file
get_file_filled(char **paths) {
	t_file result = (t_file) malloc(sizeof(t_file));

	if (result == NULL) {
		return (NULL);
	}

	/// how many paths determine how many nodes in the t_file structure.

	return (result);
}

void
parse_command(char **av) {
}
