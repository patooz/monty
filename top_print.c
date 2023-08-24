#include "monty.h"
/**
 * top_print - prints the top of the stack
 * @head: head of the stack
 * @count: nothing
 */
void top_print(stack_t **head, unsigned int count)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't print, tack empty\n", count);
		fclose(bus.f);
		free(bus.con);
		f_list(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}

