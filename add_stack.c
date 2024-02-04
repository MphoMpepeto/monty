#include "monty.h"

/**
 * add_stack - produces the sum of the top 2 elements in the stack
 * @h: a double pointer to the stack head
 * @j: represents the counter of the line number
 *
 * Return: nothing
 */

void add_stack(stack_t **h, unsigned int j)
{
	stack_t *head;
	int len = 0;
	int meo;

	head = *h;
	while (head)
	{
		head = head->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "%d: stack too small to add elements\n", j);
		fclose(bus.f_monty);
		free(bus.data);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	head = *h;
	meo = head->next->n + head->n;
	head->next->n = meo;
	*h = head->next;
	free(head);
}
