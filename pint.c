#include "monty.h"
/**
 * f_pint - ...
 * @head: ...
 * @counter: ...
 * Return: ...
*/
void f_pint(stack_t **head, unsigned int counter)
{
	/*printing stack*/

	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	/*printf function*/

	printf("%d\n", (*head)->n);
}
