#include "monty.h"
/**
 * pall_stack - a fucntion that prints the stack
 * @h: the head of the stack
 * @n: void argument
 * Return: nothing
*/
void f_pall(stack_t **h, unsigned int n)
{
	stack_t *h;
	(void)n;

	head = *h;
	if (head == NULL)
		return;
	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
	}
}
