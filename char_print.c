#include "monty.h"
/**
 * char_print - prints the character of the stack
 * @head: head of the stack
 * @count: line counter
 * Return: nothing
 */
void char_print(list_t **head, unsigned int count)
{
	list_t *i;

	i = *head;
	if (!i)
	{
		fprintf(stderr, "L%d: can't print, stack empty\n", count);
		fclose(bus.f);
		free(bus.con);
		f_list(*head);
		exit(EXIT_FAILURE);
	}
	if (i->m > 127 || i-> m < 0)
	{
		fprintf(stderr, "L%d: can't print, value range out\n", count);
		fclose(bus.f);
		free(bus.con);
		f_list(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", i->m);
}
