#include "monty.h"
#include <unistd.h>
/**
 * main - accepts command form user
 * @c: count of arguments
 * @v: arguments
 *
 * Return: 0
 */

int main(int c, char **v)
{
	int fd;
	char buf[15];

	fd = open(v[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error: Can't open file %s\n", v[1]);
		exit(EXIT_FAILURE);
	}

	read(fd, buf, 13);

	close(fd);

	if (c != 2)
	{
		printf("USAGE: monty file\n");
	}
	else
	{
		if (isnum(v[1]))
		{
			
		}	
		else
		{
			printf(" Not Number!\n");
		}
	}
	return(0);
}
