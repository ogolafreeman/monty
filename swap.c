#include "monty.h"
/**
 * f_swap - ...
 * @head:...
 * @counter: ...
 * Return: ...
*/
void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;

	/*a while loop that checks if we're still on the elements of the stack*/

	while (h)
	{
		h = h->next;
		len++;
	}

	/*an if statement that checks the length of the stack*/

	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	h = *head;
	aux = h->n;
	h->n = h->next->n;
	h->next->n = aux;
}
