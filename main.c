#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

#include "options.h"


int set_user_opts(int ac, char **av, t_opts *opts) {
	int opt;
	opterr = 0;
	opt_long;

	while ((opt = getopt_long(ac, av, "larRt", opt_long, NULL)) != -1) {
		switch (opt) {
			case 1:
				printf("Usage: ft_ls [OPTION]... [FILE]...\n");
				printf("List information about the FILEs (the current directory by default).\nSort entries alphabetically if none of -cftuvSUX nor --sort is specified.\n");
				break ;
			case 'l':
				printf("l\n");
				break ;
			case 'a':
				printf("a\n");
				break ;
			case 'r':
				printf("r\n");
				break ;
			case 'R':
				printf("R\n");
				break ;
			case 't':
				printf("t\n");
				break ;
			default:
				printf("ft_ls: invalid option -- '%c'\n", optopt);
				printf("Try 'ft_ls --help' for more information.\n");
				return 2;
		}
	}
	return 0;
}

int main(int ac, char **av) {
	t_opts opts;
	int ret;
	if ((ret = set_user_opts(ac, av, &opts)) != 0)
		return ret;

	return 0;
}
