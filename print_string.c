#include "monty.h"
/**
 * _pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @head: reps the stack head
 * @x: reps the line number
 * Return: none
*/
void _pstr(stack_t **head, unsigned int x)
{
	stack_t *h;
	(void)x;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
