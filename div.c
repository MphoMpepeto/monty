#include "monty.h"
/**
 * _div - divides the second top element of the stack by the top element of the stack
 * @head: reps the stack head
 * @x: reps the line number
 * Return: nothing
*/
void _div(stack_t **head, unsigned int x)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", x);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", x);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	mem = h->next->n / h->n;
	h->next->n = mem;
	*head = h->next;
	free(h);
}
