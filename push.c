#include "monty.h"
/**
 * _push - a function that pushes a node to the stack
 * @head: a double pointer to the stack head
 * @x: an integer indicating the line number
 * Return: nothing
*/
void _push(stack_t **head, unsigned int x)
{
	int n, j = 0, indicator = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			j++;
		for (; bus.arg[j] != '\0'; j++)
		{
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
				indicator = 1; }
		if (indicator == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", x);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", x);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, n);
	else
		addqueue(head, n);
}
