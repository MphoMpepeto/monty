#include "monty.h"
/**
 * _pop -  removes the top element of the stack
 * @head: a double pointer to the stack head
 * @x: an integer repping the line number
 * Return: nothing
*/
void _pop(stack_t **head, unsigned int x)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", x);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
