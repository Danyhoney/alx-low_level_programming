/*
 * File_name:7-insert_dnodeint.c, 2-add_dnodeint.c, 3-add_dnodeint_end.c
 * Created: 18th May, 2023
 * Auth: David James Taiye(Official0mega)
 * Size: undefined
 * Project: 0x17-doubly_linked_lists
 * Status: submitted.
 */

#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnode_at_index - func to insert a new node at a given position.
 * @idx: index or position in the list where the new node should be inserted.
 * @h: double pointer to the header of the doubly linked list.
 * @n: data value/content of the new node that will be inserted into the list
 * Return: The address of the new node or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *node = NULL;
	unsigned int i = 0;

	if (h != NULL)
	{
		node = *h;
		while ((i != idx) && (node != NULL))
		{
			node = node->next;
			i++;
		}
		if (i == idx)
		{
			if (node == NULL)
				return (add_dnodeint_end(h, n));
			new_node = malloc(sizeof(dlistint_t));
			if (new_node != NULL)
			{
				new_node->n = n;
				new_node->next = node, new_node->prev = NULL;
				if (node->prev != NULL)
				{
					node->prev->next = new_node;
					new_node->prev = node->prev;
				}
				node->prev = new_node;
				if (i == 0)
					*h = new_node;
			}
		}
	}
	return (new_node);
}
