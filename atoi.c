#include "monty.h"
/**
 * convert_line_token_to_int - convert string to int
 * @token_line: a double pointer
 * @pos: int
 * Return: a int
 */
int convert_line_token_to_int(char **token_line, int pos)
{
	if (strcmp(token_line[0], "push") == 0)
	{
		if (token_line[1][0] != '\0' && _isdigit(token_line[1]))
		{
			number[0] = atoi(token_line[1]);
			return (1);
		}
		else
		{
			printf("L%d: usage: push integer", pos);
			exit(EXIT_FAILURE);
			return (0);
		}
	}
	return (0);
}
/**
 * _isdigit - question for number in position
 * @token_line: string to compare
 * Return: a int if its true 1
 */
int _isdigit(char *token_line)
{
	int i;

	for (i = 0; token_line[i] != '\0'; i++)
	{
		if (!isdigit(token_line[i]))
		{
			return (0);
		}
	}
	return (1);
}
