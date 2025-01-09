#include "libasm.h"

int main()
{
	char *str = "Hello, World!";
	char *str2 = "Hellwo, World!";
	printf("ft_strlen: %zu\n", ft_strlen(str));
	printf("ft_strcmp: %d\n", ft_strcmp(str, str2));

	char *dest = malloc(13);
	printf("ft_strcpy: %s\n", ft_strcpy(dest, str));
	return (0);
}