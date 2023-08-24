#include "monty.h"

/**
 * k_plus - ads two elements of the stack
 * @h: head
 * @co: line number
 * Return: nothing
 */
void k_plus(stack_t **h, unsigned int co)
{
	stack_t *head;
	int l = 0, _abs;

	head = *h;
	while (head)
	{
		head = head->next;
		l++;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n",
				co);
		fclose(bus.f);
		free(bus.con);
		free(*h);
		exit(EXIT_FAILURE);
	}
	head = *h;
	_abs = head->n + head->next->n;
	head->next->n = _abs;
	*h = head->next;
	free(head);
}
