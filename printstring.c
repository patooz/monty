#include "monty.h"
/**
 * print_string - prints a string from the top of the stack
 * @head: head of the stack
 * @count: line counter
 * Return: nothing
 */
void print_string(list_t **head, unsigned int count)
{
	list_t *i;
	(void)count;

	i = *head;
	while (i)
	{
		if (i->m > 127 || i->m <= 0)
			break;
		printf("%c", i->m);
		i = i->next;
	}
	printf("\n");
}
