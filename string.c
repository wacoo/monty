#include "monty.h"

/**
 * isnum - checks if a string is an number
 * @s: pointer of a string
 *
 * Return: 1 or 0
 */

int isnum(char *s)
{
	int i;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		if (((s[i] > 64 && s[i] < 91) || (s[i] > 96 && s[i] < 123)))
		{
			return (0);
		}
	}
	return (1);
}
