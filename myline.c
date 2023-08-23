#include "monty.h"
/**
 * k_line - prints top character of the srack
 * @head: head of the stack
 * @count: line counter
 * Return: nothing
 */
void k_line(list_t **head, unsigned int count)
{
	(void)head;
	(void)count;
	bus.pale = 1;
}
/**
 * myline - adds a node to the stack at the end
 * @m: new value
 * @head: stack head
 * Return: nothing
 */
void myline(list_t **head, int m)
{
	list_t *count, *_abs;

	_abs = *head;
	count = malloc(sizeof(list_t));
	if (count == NULL)
		printf("Error\n");
	count->m = m;
	count->next = NULL;
	if (_abs)
	{
		while (_abs->next)
			_abs = _abs->next;
	}
	if (!_abs)
	{
		*head = count;
		count->p = NULL;
	}
	else
	{
		_abs->next = count;
		count->p = _abs;
	}
}
