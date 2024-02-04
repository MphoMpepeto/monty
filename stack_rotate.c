#include "monty.h"
/**
  *stack_rotate - a fucntion that rotates the stack to the top
  *@h: head of the stack
  *@j: the counter for the line number
  *Return: nothing
 */

void stack_rotate(stack_t **h,  __attribute__((unused)) unsigned int j)
{
	stack_t *temp = *h, *meo;

	if (*h == NULL || (*h)->next == NULL)
	{
		return;
	}
	meo = (*h)->next;
	meo->prev = NULL;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = *h;
	(*h)->next = NULL;
	(*h)->prev = temp;
	(*h) = meo;
}
