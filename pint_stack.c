#include "monty.h"
/**
 * pint_stack - a function that prints the top of the stack
 * @h: a double pointer to the head of the stack
 * @j: a counter for the line number
 * Return: nothing
*/
void pint_stack(stack_t **h, unsigned int j)
{
	if (*h == NULL)
	{
		fprintf(stderr, "L%u: can't print the empty stack\n", j);
		fclose(bus.f_monty);
		free(bus.data);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	
	printf("%d\n", (*h)->n);
}
