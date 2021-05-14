#include "monty.h"

int number[3] = {0, 0, 0};
/**
 * main - Driver program
 *@argc: number of arguments
 *@argv: string arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	FILE *fd;
	size_t command, lenght, ln = 1;
	stack_t *stack = NULL;
	ssize_t read;
	char *line = NULL, *token_line[2], *path = argv[1];
	void (*f_ptr)(stack_t **stack, unsigned int line_number);

	argc_police(argc);
	fd = fopen(path, "r");
	path_police(fd, path);
	while ((read = getline(&line, &lenght, fd)) != -1)
	{
		if (is_empty(line))
		{
			continue;
		}
		command = line_tokenizer(line, token_line);
		if (command == 0)
		{
			continue;
		}

		convert_line_token_to_int(token_line, ln);
		free_in_error(line, fd, stack);
		cmp_struct(token_line[0]);
		f_ptr = stack_function(token_line[0]);
		opcode_police(f_ptr, ln, token_line[0]);
		free_in_error(line, fd, stack);
		(*f_ptr)(&stack, ln);
		free_in_error(line, fd, stack);
		line_clear(token_line);
		ln++;
	}
	free(line);
	fclose(fd);
	_free(stack);
	return (0);
}
