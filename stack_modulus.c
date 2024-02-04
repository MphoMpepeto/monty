#include "monty.h"

/**
 * stack_modulus - produces the remainder of the after the division of the stack by the head of the stack
 * @h: a double pointer to the stack head
 * @j: represents the counter of the line number
 *
 * Return: nothing
 */

void stack_modulus(stack_t **h, unsigned int j)
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
		fprintf(stderr, "%d: stack too small to find modulus\n", j);
		fclose(bus.f_monty);
		free(bus.data);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}

	head = *h;
	if (head->n == 0)
	{
		fprintf(stderr, "%d: divided the stack by zero\n", j);
		fclose(bus.f_monty);
		free(bus.data);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	
	meo = head->next->n % head->n;
	head->next->n = meo;
	*h = head->next;
	free(head);
}
