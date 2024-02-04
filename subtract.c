#include "monty.h"
/**
  * _sub - subtracts the top element of the stack from the second top element of the stack. 
  * @head: d-pointer to head
  * @x: int rep line number
  * Return: nothing
  */

void _sub(stack_t **head, unsigned int x)
{
	stack_t *mem;
	int sus, nodes;

	mem = *head;
	for (nodes = 0; mem != NULL; nodes++)
		mem = mem->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, nodes less than 2\n", x);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	mem = *head;
	sus = mem->next->n - mem->n;
	mem->next->n = sus;
	*head = mem->next;
	free(mem);
}
