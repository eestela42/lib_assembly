#include "libasm.h"

void test_strlen()
{
	int size = 4;
	char **sample = (char *[]){"012345", "0", "", "Hello, World!"};
	printf("------------- test strlen -------------\n");
	for (int i = 0; i < size; i++)
	{
		printf("strlen: %zu\n", strlen(sample[i]));
		printf("ft_strlen: %zu\n", ft_strlen(sample[i]));
	}
}

void test_strcmp()
{
	int size = 4;
	char **sample = (char *[]){"012345","012345", "0", "0", "", "", "Hello, World!", "Hello, World!"};
	printf("------------- test strcmp -------------\n");
	for (int i = 0; i < size; i++)
	{
		printf("strcmp: %i\n", strcmp(sample[i*2], sample[i*2 + 1]));
		printf("ft_strcmp: %i\n", ft_strcmp(sample[i*2], sample[i*2+1]));
	}
}

void test_strcpy()
{
	int size = 4;
	char **sample = (char *[]){"012345", "0", "", "Hello, World!"};
	printf("------------- test strcpy -------------\n");
	for (int i = 0; i < size; i++)
	{
		char *dest = malloc(strlen(sample[i]) + 1);
		printf("strcpy: %s\n", strcpy(dest, sample[i]));
		free(dest);
		dest = malloc(strlen(sample[i]) + 1);
		printf("ft_strcpy: %s\n", ft_strcpy(dest, sample[i]));
		free(dest);
	}
}

void test_write()
{
	int size = 4;
	char **sample = (char *[]){"012345", "0", "", "Hello, World!"};
	printf("------------- test write -------------\n");
	for (int fd = 0; fd < 2; fd++)
	{
		for (int i = 0; i < size; i++)
		{
			errno = 0;
			printf("write: %zd\n", write(fd, sample[i], strlen(sample[i])));
			printf("ft_write: %zd\n", ft_write(fd, sample[i], strlen(sample[i])));
			printf("errno : %d\n", errno);
		}
	}
}

void test_read()
{
	int size = 4;
	char **sample = (char *[]){"012345", "0", "", "Hello, World!"};
	printf("------------- test read -------------\n");
	for (int i = 0; i < size; i++)
	{
		char *dest = malloc(strlen(sample[i]) + 1);
		printf("read: %zd\n", read(0, dest, strlen(sample[i])));
		free(dest);
		dest = malloc(strlen(sample[i]) + 1);
		printf("ft_read: %zd\n", ft_read(0, dest, strlen(sample[i])));
		free(dest);
	}
}

void test_strdup()
{
	int size = 4;
	char **sample = (char *[]){"012345", "0", "", "Hello, World!"};
	printf("------------- test strdup -------------\n");
	for (int i = 0; i < size; i++)
	{
		printf("strdup: %s\n", strdup(sample[i]));
		printf("ft_strdup: %s\n", ft_strdup(sample[i]));
	}
}


int main(int ac, char ** av)
{
	if (ac == 1)
	{
		test_strlen();
		test_strcmp();
		test_strcpy();
		test_write();
		test_read();
		test_strdup();
		return 0;
	}
	else if (ac == 2)
	{
		if (strcmp(av[1], "strlen") == 0)
			test_strlen();
		else if (strcmp(av[1], "strcmp") == 0)
			test_strcmp();
		else if (strcmp(av[1], "strcpy") == 0)
			test_strcpy();
		else if (strcmp(av[1], "write") == 0)
			test_write();
		else if (strcmp(av[1], "read") == 0)
			test_read();
		else if (strcmp(av[1], "strdup") == 0)
			test_strdup();
	}
}