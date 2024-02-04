#include "monty.h"
/**
 * _swap - swaps the top two elements of the stack
 * @head: double pointer to the head of the stack
 * @x: an integer repping the line number
 * Return: nothing
*/
void _swap(stack_t **head, unsigned int x)
{
	stack_t *h;
	int len = 0, mem;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", x);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	mem = h->n;
	h->n = h->next->n;
	h->next->n = mem;
}
