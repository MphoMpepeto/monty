#include "monty.h"

/**
 * turn_stack - turns the stack around from the bottom
 * @h: a double pointer to the head of a stack
 * @n: a counter for the line number
 *
 * Return: nothing
 */

void turn_stack(stack_t **h, unsigned int n)
{
	stack_t *cpy;

	cpy = *h;
	if (*h == NULL || *h->next == NULL)
	{
		return;
	}
	while (cpy->next)
	{
		cpy = cpy->next;
	}
	cpy->next = *h;
	cpy->prev->next = NULL;
	cpy->prev = cpy;
	*h->prev = cpy;
	*h = cpy;
}

