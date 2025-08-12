#ifndef OPTIONS_H
# define OPTIONS_H

# include <getopt.h>

typedef struct s_opts {
	bool l;
	bool all;
	bool reverse;
	bool recursive;
	bool sort_by_time;
}	t_opts;

static struct option opt_long[] = {
	{"help", no_argument, 0, 1},
	{"list", no_argument, 0, 'l'},
	{"all", no_argument, 0, 'a'},
	{"reverse", no_argument, 0, 'r'},
	{"recursive", no_argument, 0, 'R'},
	{"t", no_argument, 0, 't'},
	{0, 0, 0, 0}
};

#endif
