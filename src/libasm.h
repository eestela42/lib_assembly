#ifndef LIBASM_H
# define LIBASM_H

# include <errno.h>
# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>

size_t			ft_strlen(const char *);
int				ft_strcmp(const char *, const char *);
char *			ft_strcpy(char *, char const *);
ssize_t			ft_write(int, const void *, size_t);
ssize_t			ft_read(int, void *, size_t);
char *			ft_strdup(const char *);

#endif