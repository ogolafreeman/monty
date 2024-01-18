#include "monty.h"
/**
 * f_add - the function adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_add(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	/* while loop */
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)/*checks if the stack is short*/
	{
		fprintf(stderr, "L%d: can't add, stack is too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n + h->next->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
