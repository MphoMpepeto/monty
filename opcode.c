#include "monty.h"

/**
 * ex_opcode - runs the opcode
 * @l_list: the stack in the form of a linked list
 * @k: a counter 
 * @f_monty: a pointer to the monty file
 * @data: the data contained in each line
 *
 * Return: 1 on success
 */

int ex_opcode(char *data, stack_t **h, unsigned int k, FILE *f_monty)
{
	instruction_t opst[] = {
				{"push", push_stack},
				{"pall", pall_stack},
				{"pint", pint_stack},
				{"pop", pop_stack},
				{"swap", f_swap},
				{"add", add_stack},
				{"sub", sub_stack},
				{"div", stack_divider},
				{"mul", f_mul},
				{"nop", f_nop},
				{"mod", f_mod},
				{"pchar", f_pchar},
				{"pstr", pstr},
				{"rotate", stack_rotate},
				{"turn", turn_stack},
				{"queue", f_queue},
				{"stack", f_stack},
				{NULL, NULL},
				};
	unsigned int x = 0;
	char *operate;

	operate = strtok(data, " \n\t");
	if (operate && operate[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");


