#include "monty.h"
/**
 * _pint - prints the value at the top of the stack, followed by a new line
 * @head: a double pointer to the stack head
 * @x: an integer representing the line number
 * Return: no return
*/
void _pint(stack_t **head, unsigned int x)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: empty stack, cant print top\n", x);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
