#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
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
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct bus_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;

char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char *clean_line(char *content);
void push_stack(stack_t **h, unsigned int n);
void pall_stack(stack_t **h, unsigned int n);
void pint_stack(stack_t **h, unsigned int n);
int ex_opcode(char *data, stack_t **h, unsigned int k, FILE *f_monty);
void free_stack(stack_t *head);
void f_pop(stack_t **h, unsigned int n);
void f_swap(stack_t **h, unsigned int n);
void add_stack(stack_t **h, unsigned int n);
void f_nop(stack_t **h, unsigned int n);
void sub_stack(stack_t **h, unsigned int n);
void stack_divider(stack_t **h, unsigned int n);
void f_mul(stack_t **head, unsigned int counter);
void f_mod(stack_t **head, unsigned int counter);
void f_pchar(stack_t **head, unsigned int counter);
void stack_print(stack_t **h, unsigned int n);
void turn_stack(stack_t **h, unsigned int n);
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter);
void add_node(stack_t **head, int n);
void add_queue(stack_t **head, int n);
void f_queue(stack_t **head, unsigned int counter);
void f_stack(stack_t **head, unsigned int counter);

#endif
