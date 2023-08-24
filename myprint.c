#include "monty.h"
/**
 * k_print - prints the stack
 * @head: head of the stack
 * @count: line count
 * Return: nothing
 */
void k_print(stack_t **head, unsigned int count)
{
	stack_t *h;
	(void)count;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
