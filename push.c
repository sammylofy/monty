#include "monty.h"
/**
 * push - Push an element to the stack
 * @stack: double pointer to the stack
 * @value: value to push
 * @line_number: current line number
 */
void push(stack_t **stack, int value, unsigned int line_number)
{
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = value;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack != NULL)
		(*stack)->prev = new_node;
	*stack = new_node;
}
