#include "monty.h"

/**
 * mystack - frees a linked list
 * @head: head of the stack
 */
void mystack(list_t *head)
{
	list_t *_abs;

	_abs = head;
	while (head)
	{
		_abs = head->next;
		free(head);
		head = _abs;
	}
}
