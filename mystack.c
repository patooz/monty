#include "monty.h"

/**
 * mystack - frees a linked list
 * @head: head of the stack
 */
void f_list(stack_t *head)
{
	stack_t *_abs;

	_abs = head;
	while (head)
	{
		_abs = head->next;
		free(head);
		head = _abs;
	}
}
