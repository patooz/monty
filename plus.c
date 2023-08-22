/**
 * f_plus - ads two elements of the stack
 * @h: head
 * @co: line number
 * Return: nothing
 */
void k_plus(list_t **h, unsigned int co)
{
	list_t *head;
	int l = 0, abs;

	head = *h;
	while (head)
	{
		head = head->next;
		l++;
	}
	if (l < 2)
	{
		fprint(stderr, "L%d: can't add, stack too short\n",
				co);
		fclose(bus.f);
		free(bus.co);
		free(*h);
		exit(EXIT_FAILURE);
	}
	head = *h;
	abs = head->m + head->next->m;
	head->next->m = abs;
	*h = head->next;
	free(head);
}
