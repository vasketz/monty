#ifndef MONTY_H
#define MONTY_H
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

extern int number[];
/**string functions*/
int line_tokenizer(char *line, char **token_line);
void argc_police(int argc);
void path_police(FILE *fd, char *file);
int convert_line_token_to_int(char **token_line, int pos);
int _isdigit(char *token_line);
int is_empty(const char *string);
void line_clear(char **token_line);
/**stack functions*/
int add_dnodeint(stack_t **head, int n);
int add_dnodeint_end(stack_t **head, int n);
void (*stack_function(char *comand))(stack_t **stack, unsigned int line_num);
void push_function(stack_t **stack, unsigned int line_number);
void pall_function(stack_t **stack, unsigned int line_number);
void pint_function(stack_t **stack, unsigned int line_number);
int print_stack_t(stack_t **stack);
void _free(stack_t *stack);
void cmp_struct(char *opcode);

void opcode_police(void (*comand)(), int ln, char *cmd);
void free_in_error(char *line, FILE *fd, stack_t *stack);
#endif /**MONTY_H*/
