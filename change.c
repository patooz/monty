#include "monty.h"
/**
 * k_change - adds elemets of the stck
 * @head: head of the stack
 * @count: kine coount
 * Return: nothing
 */
void k_change(stack_t **head, unsigned int count)
{
	stack_t *i;
	int l = 0, _abs;

	i = *head;
	while (i)
	{
		i = i->next;
		l++;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", count);
		fclose(bus.f);
		free(bus.con);
		f_list(*head);
		exit(EXIT_FAILURE);
	}
	i = *head;
	_abs = i->n;
	i->n = i->next->n;
	i->next->n = _abs;
}
