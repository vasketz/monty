#include "monty.h"
/**
 * free_in_error - free all if an error happen in create a node
 * @line: string line
 * @fd: filedescriptor
 * @stack: node in stack
 * Return: Void.
 */
void free_in_error(char *line, FILE *fd, stack_t *stack)
{
	if (number[2] == 1)
	{
		free(line);
		fclose(fd);
		_free(stack);
		exit(EXIT_FAILURE);
	}
}
