#include "monty.h"

/**
 * stack_print - prints out the element of the stack
 * @h: double pointer to the stack head
 * @n: counter of the elements
 *
 * Return: nothing
 */

void stack_printer(stack_t **h, unsigned int n)
{
	stack_t *head;
	void n;

	head = *h;
	if (head == NULL)
		return;
	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
	}
}
