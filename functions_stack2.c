#include "monty.h"
/**
 * pint_function - prints top value
 * @stack: double pointer function
 * @line_number: unsigned int
 * Return: Void.
 */
void pint_function(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;

	printf("%d\n", tmp->n);
	if (!tmp)
	{
		printf("L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
		return;
	}
}
