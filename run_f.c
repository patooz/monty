#include "monty.h"

/**
 * run_f - runsa the opcode
 * @list: head to the linked list
 * @co: counter
 * @f: file pointer
 * @cont: content
 * Return: nothing
 */
int run_f(char *cont, list_t **list, unsigned int co, FILE *f)
{
	inst_t ptr[] = {
		{"push", k_push},
		{"pall", k_pall},
		{"pint", k_pint},
		{"pop", k_pop},
		{"swap", k_swap},
		{"add", k_plus},
		{"nop", k_nop},
		{"sub", k_sub},
		{"mul", k_mul},
		{"mod", k_mod},
		{"pchar", k_pchar},
		{"pstr", k_pstr},
		{"rotl", k_rotl},
		{"rotr", k_rotr},
		{"queue", k_queue},
		{"stack", k_list},
		{NULL, NULL}
	};
	unsigned int x = 0;
	char *p;

	p = strtok(cont, " \n\t");
	if (p && p[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (ptr[x].op && p)
	{
		if (strcmp(p, ptr[i].op) == 0)
		{
			ptr[x].funct(list, co);
			return (0);
		}
		x++;
	}
	if (p && ptr[x].op == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", co, p);
		fclose(f);
		free(cont);
		f_liidt(*list);
		exit(EXIT_FAILURE);
	}
	return (1);
}
