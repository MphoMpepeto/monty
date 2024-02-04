#include "monty.h"

/**
 * stack_string - prints a string from the top of the stack
 * @h: a diouble pointer to the head of the stack
 * @j: counter of the elements of the stack
 * Return: nothing
 */

void stack_string(stack_t **h, unsigned int j)
{
	stack_t *head;
	void j;

	head = *h;
	while (head)
	{
		if (head->n 127 || head->n <= 0)
		{
			break;
		}
		printf("%c", head->n);
		head = head->next;
	}
	printf("\n");
}
