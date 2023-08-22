#include "monty.h"

/**
 * plusnode - adds node at the stack hed
 * @head: head of the stck
 * @m: value
 * Return: nothing
 */
void plusnode(list_t **head, int m)
{
	list_t *_new, *_abs;

	_abs = *head;
	_new = malloc(sizeof(list_t));
	if (_new == NULL)
		exit(0);
	if (_abs)
		_abs->p = _new;
	_new->m = m;
	_new->next = *head;
	_new->p = NULL;
	*head = _new;
}
