#include "monty.h"
/**
 * print_string - prints a string from the top of the stack
 * @head: head of the stack
 * @count: line counter
 * Return: nothing
 */
void print_string(stack_t **head, unsigned int count)
{
	stack_t *i;
	(void)count;

	i = *head;
	while (i)
	{
		if (i->n > 127 || i->n <= 0)
			break;
		printf("%c", i->n);
		i = i->next;
	}
	printf("\n");
}
