#include "monty.h"
/**
 * _mul - multiplies the top two elements of the stack.
 * @head: reps the stack head
 * @counter: reps the line number
 * Return: nothhing
*/
void _mul(stack_t **head, unsigned int x)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", x);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	mem = h->next->n * h->n;
	h->next->n = mem;
	*head = h->next;
}
