#include "monty.h"
/**
 * line_tokenizer - tokennizer the file descriptor
 * @line: line args
 * @token_line: double pointer
 * Return: 1 if its true
 */
int line_tokenizer(char *line, char **token_line)
{
	char *token = NULL, *saveptr = NULL;
	int i = 0;

	token = strtok_r(line, "\t\n ", &saveptr);

	while (token && i < 2)
	{
		token_line[i] = token;
		token = strtok_r(NULL, "\t\n ", &saveptr);
		i++;
	}
	return (1);
}
/**
 * line_clear - clear the tokens
 * @token_line: double pointer
 * Return: Void.
 */
void line_clear(char **token_line)
{
	int i;

	for (i = 0; token_line[i]; i++)
	{
		token_line[i][0] = '\0';
	}
}
/**
 * is_empty - funtion police
 * @string: string to treat
 * Return: 1 if its true
 */
int is_empty(const char *string)
{
	while (*string != '\0')
	{
		if (!isspace((unsigned char)*string))
		{
			return (0);
		}
		string++;
	}
	return (1);
}
