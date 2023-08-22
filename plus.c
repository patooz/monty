#include "monty.h"

/**
 * k_plus - ads two elements of the stack
 * @h: head
 * @co: line number
 * Return: nothing
 */
void k_plus(list_t **h, unsigned int co)
{
	list_t *head;
	int l = 0, _abs;

	head = *h;
	while (head)
	{
		head = head->next;
		l++;
	}
	if (l < 2)
	{
		fprint(stderr, "L%d: can't add, stack too short\n",
				co);
		fclose(bus.f);
		free(bus.co);
		free(*h);
		exit(EXIT_FAILURE);
	}
	head = *h;
	_abs = head->m + head->next->m;
	head->next->m = _abs;
	*h = head->next;
	free(head);
}
