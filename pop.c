#include "monty.h"
/**
 * f_pop - ...
 * @head: ...
 * @counter: ...
 * Return: ...
*/
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	/*printing popped element*/

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	/* freeing head*/

	h = *head;
	*head = h->next;
	free(h);
}
