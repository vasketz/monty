#include "monty.h"
/**
 * push_function - push an interger to stack
 * @stack: double pointer of function
 * @line_number: interger
 * Return: Void.
 */
void push_function(stack_t **stack, unsigned int line_number)
{
	int run;

	if (number[1] == 0)
	{
		run = add_dnodeint(stack, number[0]);
	}
	else
	{
		run = add_dnodeint_end(stack, number[0]);
	}
	if (run < 0)
	{
		printf("L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
		return;
	}
}
/**
 * pall_function - print an interger from stack
 * @stack: double pointer of function
 * @line_number: interger
 * Return: Void.
 */
void pall_function(stack_t **stack, unsigned int line_number)
{
	int run;
	(void) line_number;

	if (run != 0)
	{
	}
	run = print_stack_t(stack);
}
/**
 * print_stack_t - auxiliar function to print stack
 * @stack: double pointer funuction
 * Return: integer
 */
int print_stack_t(stack_t **stack)
{
	stack_t *tmp = *stack;

	if (!tmp)
	{
		return (-1);
	}
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
	return (0);
}
/**
 * _free - free stack
 * @stack: node
 * Return: Void.
 */
void _free(stack_t *stack)
{
	stack_t *tmp;

	while (stack != NULL)
	{
		tmp = stack;
		stack = stack->next;
		free(tmp);
	}
}
