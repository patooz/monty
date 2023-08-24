#include "monty.h"

/**
 * k_chei - divides the elements of the stack
 * @head: head of the stack
 * @co: line number
 * Return: nothing
 */
void k_chei(stack_t **head, unsigned int co)
{
	stack_t *h;
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
	if (h->n == 0)
	{
		fprint(stderr, "L%d: division by zero\n", co);
		fclose(bus.f);
		free(bus.co);
		f_list(*head);
		exit(EXIT_FAILURE);
	}
	_abs = h->next->n / h->n;
	h->next->n = _abs;
	*head = h->next;
	free(h);
}
