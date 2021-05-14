#include "monty.h"
/**
 * argc_police - argc control
 * @argc: number of arguments
 * Return: Void.
 */
void argc_police(int argc)
{
	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
}
/**
 * path_police - file descriptor control
 * @fd: file descriptor
 * @file: file to process
 * Return: Void.
 */
void path_police(FILE *fd, char *file)
{
	if (fd == NULL)
	{
		printf("Error: Can't open file %s\n", file);
		exit(EXIT_FAILURE);
	}
}
/**
 * opcode_police - function to control the commands
 * @comand: variable to function
 * @line_number: int number of line
 * @cmd: comand to tread
 * Return: void
 */
void opcode_police(void (*comand)(), int line_number, char *cmd)
{
	if (comand == NULL)
	{
		printf("L%d: unknown instruction %s\n", line_number, cmd);
		number[2] = 1;
		return;
	}
}
/**
 * cmp_struct - compara the stringn passed
 * @comand: string to compare
 * Return: Void.
 */
void cmp_struct(char *comand)
{
	if (strcmp(comand, "stack") == 0)
	{
		number[1] = 0;
	}
	if (strcmp(comand, "queue") == 0)
	{
		number[1] = 1;
	}
}
