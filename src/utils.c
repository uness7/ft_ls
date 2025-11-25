/*
** @author yzioual
*/

#include "ft_ls.h"

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

int
is_ops(char *str) {
	if (str == NULL){
		return (NULL);
	}
	if (str[0] == "-") {
		return (1);
	}
	return (0);
}

void
parse_command(char **av) {
	int	len;
	int	i;

	i = 1; // skip the first word
	len = get_double_arr_size(av);
	while (i < len) {
		if (is_ops(av[i] == 1)) {
		} else {
		}
		i++;
	}
}

