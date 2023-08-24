#include "monty.h"
/**
 * k_line - prints top character of the srack
 * @head: head of the stack
 * @count: line counter
 * Return: nothing
 */
void k_line(stack_t **head, unsigned int count)
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
void myline(stack_t **head, int n)
{
	stack_t *count, *_abs;

	_abs = *head;
	count = malloc(sizeof(stack_t));
	if (count == NULL)
		printf("Error\n");
	count->n = n;
	count->next = NULL;
	if (_abs)
	{
		while (_abs->next)
			_abs = _abs->next;
	}
	if (!_abs)
	{
		*head = count;
		count->prev = NULL;
	}
	else
	{
		_abs->next = count;
		count->prev = _abs;
	}
}
