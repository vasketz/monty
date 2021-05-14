#include "monty.h"
/**
 * stack_function - function pointer to linked list functions
 * @comand: a command pass trought this function
 * Return: the function if find the match
 */
void (*stack_function(char *comand))(stack_t **stack, unsigned int line_num)
{
	int i = 0;

	instruction_t cmd[] = {
		{"push", push_function},
		{"pall", pall_function},
		{"pint", pint_function},
		{NULL, NULL}
	};
	while (cmd[i].opcode != NULL)
	{
		if (strcmp(comand, cmd[i].opcode) == 0)
		{
			break;
		}
		i++;
	}
	return (*(cmd[i]).f);
}
