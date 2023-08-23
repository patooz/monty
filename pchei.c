#include "monty.h"

/**
 * k_chei - divides the elements of the stack
 * @head: head of the stack
 * @co: line number
 * Return: nothing
 */
void k_chei(list_t **head, unsigned int co)
{
	list_t *h;
	int l = 0, _abs;

	h = *head;
	while (h)
	{
		h = h->next;
		l++;
	}
	if (l < 2)
	{
		fprint(stderr, "L%d: can't div, stack too short\n",
				co);
		fclose(bus.f);
		free(bus.co);
		f_list(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->m == 0)
	{
		fprint(stderr, "L%d: division by zero\n", co);
		fclose(bus.f);
		free(bus.co);
		f_list(*head);
		exit(EXIT_FAILURE);
	}
	_abs = h->next->m / h->m;
	h->next->m = _abs;
	*head = h->next;
	free(h);
}
