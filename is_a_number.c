#include "monty.h"
/**
 * is_number - Check if a string is a number
 * @str: string to check
 * Return: 1 if true, 0 if false
 */
int is_number(char *str)
{
	if (str == NULL || *str == '\0')
		return (0);

	if (*str == '-')
		str++;

	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}

	return (1);
}
