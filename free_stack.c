#include "monty.h"
/**
 * free_stack - Free the stack
 * @stack: double pointer to the stack
 */
void free_stack(stack_t **stack)
{
	stack_t *current, *next;

	current = *stack;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*stack = NULL;
}
