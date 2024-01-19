#include "monty.h"
/**
 * pall - Print all elements of the stack
 * @stack: double pointer to the stack
 * @line_number: current line number
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	(void)line_number;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
