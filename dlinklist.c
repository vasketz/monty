#include "monty.h"
/**
 * add_dnodeint - this adds a new node
 * @head: double pointer.
 * @n: int number
 * Return: 1 if true
 */
int add_dnodeint(stack_t **head, int n)
{
	stack_t *new;

	if (!head)
	{
		return (0);
	}
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
		return (-1);
	}
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	*head = new;
	return (1);
}
/**
 * add_dnodeint_end - adds a neew node to end of list
 * @head: double pointer
 * @n: int number
 * Return: 1 if is true
 */
int add_dnodeint_end(stack_t **head, int n)
{
	stack_t *new;
	stack_t *tmp;
	int i;

	if (!head)
	{
		return (0);
	}
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
		return (-1);
	}
	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*head = new;
	}
	else
	{
		tmp = *head;
		for (i = 0; tmp->next != NULL; i++)
		{
			tmp = tmp->next;
		}
		new->n = n;
		new->next = new;
		new->prev = tmp;
	}
	return (1);
}
