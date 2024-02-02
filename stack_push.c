#include "monty.h"
/**
 * push_stack - a function that adds a node to the stack
 * @h: a double pointer to the head of the stack
 * @n: counts the line number
 * Return: nothing
*/

void push_stack(stack_t **h, unsigned int n)
{
	int i, j = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			j++;
		for (; bus.arg[j] != '\0'; j++)
		{
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
				flag = 1; 
		}
		if (flag == 1)
		{ 
			fprintf(stderr, "L%d: usage: push integer\n", n);
			fclose(bus.file);
			free(bus.content);
			free_stack(*h);
			exit(EXIT_FAILURE); 
		}
	}
	else
	{
	       	fprintf(stderr, "L%d: usage: push integer\n", n);
		fclose(bus.file);
		free(bus.content);
		free_stack(*h);
		exit(EXIT_FAILURE); 
	}
	i = atoi(bus.arg);
	if (bus.lifi == 0)
		add_node(h, i);
	else
		add_queue(h, i);
}
