#include "monty.h"
/**
 * _add - adds the top two elements of the stack.
 * @head: a double pointer to the stack head
 * @x: an integer reps line number
 * Return: nothing
*/
void _add(stack_t **head, unsigned int x)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", x);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	mem = h->n + h->next->n;
	h->next->n = mem;
	*head = h->next;
	free(h);
}
