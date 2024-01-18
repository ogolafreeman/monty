#include "monty.h"
/**
  *f_sub- ...
  *@head: ...
  *@counter: ...
  *Return: ...
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *aux;
	int sus, nodes;

	aux = *head;
	/*for loop for traversing through the nodes*/

	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;

	/*if atatement for printing nodes*/

	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	sus = aux->next->n - aux->n;
	aux->next->n = sus;
	*head = aux->next;
	free(aux);
}
