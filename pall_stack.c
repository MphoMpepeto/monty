#include "monty.h"
/**
 * pall_stack - a fucntion that prints the stack
 * @h: the head of the stack
 * @j: void argument
 * Return: nothing
*/
void f_pall(stack_t **h, unsigned int j)
{
	stack_t *h;
	(void)n;

	head = *h;
	if (head == NULL)
		return;`
	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
	}
}
