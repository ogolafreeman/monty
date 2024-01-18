#include "monty.h"
/**
 * f_queue - ...
 * @head: ...
 * @counter: ...
 * Return: ...
*/
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;

	(void)counter;

	bus.lifi = 1;
}

/**
 * addqueue - ...
 * @n: ...
 * @head: ...
 * Return: ...
*/
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));

	/* prints error*/

	if (new_node == NULL)
	{
		printf("Error\n");
	}

	/* points to the new node*/

	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}

	if (!aux)
	{
		*head = new_node;
		new_node->prev = NULL;
	}

	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}
