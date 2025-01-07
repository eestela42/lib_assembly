#include <stdlib.h>

int ft_strlen(char *str)
{
	if (str == 0)
		return (0);
	malloc(1000);
	int i = 0;

	while (str[i] != 0)
		i++;
	
	return (i);
}