#include "monty.h"
data_t bus = {NULL, NULL, NULL, 0};
/**
 * main - main entry
 * @argc: argument count
 * @argv: argument array
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char *cont;
	FILE *f;
	size_t s = 0;
	ssize_t r_l = 1;
	stack_t *list = NULL;
	unsigned int count = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	f = fopen(argv[1], "r");
	bus.f = f;
	if (!f)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (r_l > 0)
	{
		cont = NULL;
		r_l = getline(&cont, &s, f);
		bus.con = cont;
		count++;
		if (r_l > 0)
			run_f(cont, &list, count, f);
		free(cont);
	}
	f_list(list);
	fclose(f);
	return (0);
}
