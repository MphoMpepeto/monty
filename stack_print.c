#include "monty.h"
/**
 * _pall - a function that prints the stack
 * @head: a double pointer to the stack head
 * @x: unused attribute
 * Return: nothing
*/
void _pall(stack_t **head, unsigned int x)
{
	stack_t *h;
	(void)x;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
