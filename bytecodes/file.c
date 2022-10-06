#include "monty.h"

/**
 * read_file - reads m files
 * @fn: file name
 *
 * Return: pointer to read string
 */

char *read_file(char *fn)
{
	int fd;
	char buf[500];                                                                                                   

	fd = open(fn, O_RDONLY);                                                                                                    

        if (fd == -1)                                                                                                                 

        {                                                                                                                             

                fprintf(stderr, "Error: Can't open file %s\n", fn);                                                                 

                exit(EXIT_FAILURE);                                                                                                   

        }
	read(fd, buf, 500);                                                                                                      
	printf("%s\n", buf);
	close(fd);
	return (buf);
}
