#include "monty.h"

/**
 * stack_divider - breaks the top 2 elements of the stack
 * @h: a double pointer to the stack head
 * @n: represents the counter of the line number
 *
 * Return: nothing
 */

void stack_divider(stack_t **h, unsigned int n)
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
		fprintf(stderr, "%d: stack too small to divide\n", n);
		fclose(bus.file);
		free(bus.content);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	head = *h;

	if (head->n == 0)
	{
		fprintf(stderr, "%d: stack too small to divide\n", n);
		fclose(bus.file);
		free(bus.content);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}

	meo = head->next->n / head->n;
	head->next->n = meo;
	*h = head->next;
	free(head);
}