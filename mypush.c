#include "monty.h"
/**
 * k_push - adds a node to the stack
 * @head: head of the stack
 * @count: line counter
 * Return: nothing
 */
void k_push(stack_t **head, unsigned int count)
{
	int i, j = 0, f = 0;


	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			j++;
		for (; bus.arg[j] != '\0'; j++)
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
				f = 1;
		if (f == 1)
		{
			fprintf(stderr, "L%d: push integer \n", count);
			fclose(bus.f);
			free(bus.con);
			f_list(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push intefer\n", count);
		fclose(bus.f);
		f_list(*head);
		exit(EXIT_FAILURE);
	}
	i = atoi(bus.arg);
	if (bus.pale == 0)
		plusnode(head, i);
	else
		myline(head, i);

}
