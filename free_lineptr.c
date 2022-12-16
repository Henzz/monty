#include "monty.h"

/**
 * free_lineptr - free line pointer returned by getline
 * @status: exit status
 * @arg: pointer to line
 */
void free_lineptr(int status, void *arg)
{
	char **lineptr = arg;

	(void)status;
	if (*lineptr != NULL)
		free(*lineptr);
}
