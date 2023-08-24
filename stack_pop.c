#include "monty.h"
/**
 * stack_pop - pops from the stack
 * @head: stack head
 * @count: line counter
 * Return: nothing
 */
void stack_pop(stack_t **head, unsigned int count)
{
	stack_t *i;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop empty stack\n", count);
		fclose(bus.f);
		free(bus.con);
		f_list(*head);
		exit(EXIT_FAILURE);
	}
	i = *head;
	*head = i->next;
	free(i);
}
