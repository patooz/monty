#include "monty.h"
/**
 * rotate - rounds up the stack
 * @head: head of the stack
 * @count: line counter
 * Return: nothing
 */
void rotate(stack_t **head, __attribute__((unused)) unsigned int count)
{
	stack_t *t = *head, *_abs;

	if (*head == NULL || (*head)->next == NULL)
		return;
	_abs = (*head)->next;
	_abs->prev = NULL;
	while (t->next != NULL)
		t = t->next;
	t->next = *head;
	(*head)->next = NULL;
	(*head)->prev = t;
	(*head) = _abs;
}
