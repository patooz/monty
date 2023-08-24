#include "monty.h"
/**
 * remove_stack - subtracts
 * @head: head of the stack
 * @count: line counter
 * Return: nothing
 */
void remove_stack(stack_t **head, unsigned int count)
{
	stack_t *_abs;
	int i, j;

	_abs = *head;
	for (i = 0; _abs != NULL; i++)
		_abs = _abs->next;
	if (i < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short", count);
		fclose(bus.f);
		free(bus.con);
		f_list(*head);
		exit(EXIT_FAILURE);
	}
	_abs = *head;
	j = _abs->next->n - _abs->n;
	_abs->next->n = j;
	*head = _abs->next;
	free(_abs);
}
