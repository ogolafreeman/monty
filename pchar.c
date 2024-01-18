#include "monty.h"
/**
 * f_pchar - ...
 * @head: ...
 * @counter: ...
 * Return: ...
*/
void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *h;

	h = *head;

	/*error statement*/

	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	/*error statement*/
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	/*printf function*/

	printf("%c\n", h->n);
}
