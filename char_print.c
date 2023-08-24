#include "monty.h"
/**
 * char_print - prints the character of the stack
 * @head: head of the stack
 * @count: line counter
 * Return: nothing
 */
void char_print(stack_t **head, unsigned int count)
{
	stack_t *i;

	i = *head;
	if (!i)
	{
		fprintf(stderr, "L%d: can't print, stack empty\n", count);
		fclose(bus.f);
		free(bus.con);
		f_list(*head);
		exit(EXIT_FAILURE);
	}
	if (i->n > 127 || i->n < 0)
	{
		fprintf(stderr, "L%d: can't print, value range out\n", count);
		fclose(bus.f);
		free(bus.con);
		f_list(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", i->n);
}
