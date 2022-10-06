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
	char *fn;

	fn = read_file(v[1]);
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
