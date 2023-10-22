/*
 * File_name: 8-delete_dnodeint.c
 * Created: 18th May, 2023
 * Auth: David James Taiye(Official0mega)
 * Size: undefined
 * Project: 0x17-doubly_linked_lists
 * Status: submitted.
 */

#include <stdlib.h>
#include "lists.h"

/**
* delete_dnodeint_at_index - that deletes the node at index
* @head: variable pointer to pointer
* @index: index to delete
* Return: 1 if it succeeded, -1 if it failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node_ptr = NULL;
	unsigned int temp = 0;

	if (head != NULL)
	{
		node_ptr = *head;
		while ((temp != index) && (node_ptr != NULL))
		{
			node_ptr = node_ptr->next;
			temp++;
		}
		if ((temp == index) && (node_ptr != NULL))
		{
			if (node_ptr->next != NULL)
			{
				node_ptr->next->prev = node_ptr->prev;
			}
			if (node_ptr->prev != NULL)
			{
				node_ptr->prev->next = node_ptr->next;
			}
			if (temp == 0)
			{
				*head = node_ptr->next;
			}
			free(node_ptr);
			node_ptr = NULL;
			return (1);
		}
	}
	return (-1);
}
