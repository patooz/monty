#include "monty.h"
/**
 * k_mul - multiplies the first elements of the stack
 * @head: head of the stack
 * @count: line counter
 * Return: nothing
 */
void k_mul(stack_t **head, unsigned int count)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", count);
		fclose(bus.f);
		free(bus.con);
		f_list(*head);
		exit(EXIT_FAILURE);
	}
	i = *head;
	_abs = i->next->n * i->n;
	i->next->n = _abs;
	*head = i->next;
	free(i);
}
