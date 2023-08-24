#include "monty.h"
/**
 * rot_down - rotates the stack from down
 * @head: head of the stack
 * @count: line counter
 * Return: nothing
 */
void rot_down(stack_t **head, __attribute__((unused)) unsigned int count)
{
	stack_t *i;

	i = *head;
	if (*head == NULL || (*head)->next == NULL)
		return;
	while (i->next)
		i = i->next;
	i->next = *head;
	i->prev->next = NULL;
	i->prev = NULL;
	(*head)->prev = i;
	(*head) = i;
}
