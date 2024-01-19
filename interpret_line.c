#include "monty.h"
/**
 * interpret_line - Interpret a line of Monty bytecode
 * @line: line of Monty bytecode
 * @stack: double pointer to the stack
 * @line_number: current line number
 */
void interpret_line(char *line, stack_t **stack, unsigned int line_number)
{
	char *opcode, *value_str;
	int value;

	opcode = strtok(line, " \t\n");
	if (opcode == NULL || opcode[0] == '#')
		return;

	if (strcmp(opcode, "push") == 0)
	{
		value_str = strtok(NULL, " \t\n");
		if (value_str == NULL || !is_number(value_str))
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
		value = atoi(value_str);
		push(stack, value, line_number);
	}
	else if (strcmp(opcode, "pall") == 0)
	{
		pall(stack, line_number);
	}
	else
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
		exit(EXIT_FAILURE);
	}
}
