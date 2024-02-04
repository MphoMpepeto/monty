#include "monty.h"
/**
  *_rotl- rotates the stack to the top
  *@head: reps the stack head
  *@x: reps the line number
  *Return: none
 */
void _rotl(stack_t **head,  __attribute__((unused)) unsigned int x)
{
	stack_t *temp = *head, *mem;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	mem = (*head)->next;
	mem->prev = NULL;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = temp;
	(*head) = mem;
}
