#include "monty.h"
/**
  *f_rotl- ...
  *@head: ...
  *@counter: ...
  *Return: ...
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp = *head, *aux;

	/*if statement*/

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}

	aux = (*head)->next;
	aux->prev = NULL;

	/*while loop*/

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	/*point to the next null*/

	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = aux;
}
