#include "monty.h"

/**
 * run_f - runsa the opcode
 * @list: head to the linked list
 * @co: counter
 * @f: file pointer
 * @cont: content
 * Return: nothing
 */
int run_f(char *cont, stack_t **list, unsigned int co, FILE *f)
{
	instruction_t ptr[] = {
		{"push", k_push},
		{"pall", k_print},
		{"pint", top_print},
		{"pop", stack_pop},
		{"swap", k_change},
		{"add", k_plus},
		{"nop", k_void},
		{"sub", remove_stack,
		{"mul", k_mul},
		{"mod", k_mod},
		{"pchar", char_print},
		{"pstr", print_string},
		{"rotl", rotate},
		{"rotr", rot_down},
		{"queue", k_line},
		{"stack", main_stack},
		{NULL, NULL}
	};
	unsigned int x = 0;
	char *p;

	p = strtok(cont, " \n\t");
	if (p && p[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (ptr[x].opcode && p)
	{
		if (strcmp(p, ptr[i].opcode) == 0)
		{
			ptr[x].funct(list, co);
			return (0);
		}
		x++;
	}
	if (p && ptr[x].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", co, p);
		fclose(f);
		free(cont);
		f_list(*list);
		exit(EXIT_FAILURE);
	}
	return (1);
}
