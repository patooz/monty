#include "monty.h"
/**
 * k_mod - division top element
 * @head: head of the stack
 * @count: line counter
 * Return: nothing
 */
void k_mod(list_t **head, unsigned int count)
{
	list_int *h;
	int l = 0, _abs;

	h = *head;
	while (h)
	{
		h = h->next;
		l++;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack tpp short\n", count);
		fclose(bus.f);
		free(bus.con);
		f_list(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->m == 0)
	{
		fprintf(stderr, "L%d: division by zero \n", count);
		fclose(bus.f);
		free(bus.con);
		f_list(*head);
		exit(EXIT_FAILURE);
	}
	_abs = h->next->m % h->m;
	h->next->m = _abs;
	*head = h->next;
	free(h);
}
