/*
 * File_name: 2-add_dnodeint.c
 * Created: 18th May, 2023
 * Auth: David James Taiye(Official0mega)
 * Size: undefined
 * Project: alx-low_level_programming
 * Status: submitted.
 */
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @n: pointer to the head or start of the doubly linked list
 * @head: address pointer
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/*
	 * We will create a temporary new node
	 * and we will use malloc to allocate some memory for it.
	 */
	dlistint_t *temp_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (temp_node == NULL)
	{
		/*
		 * It should return NULL if it failed to allocate
		 * memory for the temp new node
		 */

		return (NULL);
	}

	/*
	 * Let us now set value for the new temp node
	 */
	temp_node->n = n;
	temp_node->prev = NULL;
	temp_node->next = *head;

	if (*head != NULL)
	{
		/*
		 * Since the List is empty, therefore, there new temp node would
		 * automatically becomes the head...
		 */
		(*head)->prev = temp_node;
	}

	/*
	 * Updating the head pointer to the new temp node
	 */
	*head = temp_node;
	return (temp_node);
}
