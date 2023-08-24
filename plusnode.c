#include "monty.h"

/**
 * plusnode - adds node at the stack hed
 * @head: head of the stck
 * @m: value
 * Return: nothing
 */
void plusnode(stack_t **head, int n)
{
	list_t *_new, *_abs;

	_abs = *head;
	_new = malloc(sizeof(list_t));
	if (_new == NULL)
		exit(0);
	if (_abs)
		_abs->prev = _new;
	_new->n = n;
	_new->next = *head;
	_new->prev = NULL;
	*head = _new;
}
