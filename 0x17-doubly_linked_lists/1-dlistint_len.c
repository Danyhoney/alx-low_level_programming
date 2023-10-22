/*
 * File_name: 1-dlistint_len.c
 * Created: 18th May, 2023
 * Auth: David James Taiye(Official0mega)
 * Size: undefined
 * Project: alx-low_level_programming
 * Status: submitted.
 */

#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - a function that returns the number of...
 * ....elements in a linked dlistint_t list.
 * @h: pointer to the head or start of the doubly linked list
 *
 * Return: the number of node
 */

size_t dlistint_len(const dlistint_t *h)
{
	/*
	 * we will hereby, initialize the variable 'track_nodes' to 0.
	 * track of the number of nodes.
	 */
	size_t track_nodes = 0;
	/*
	 * we will use a 'while' loop to iterate over the doubly linked list
	 * starting from the given head pointer 'h
	 * This will also traverse the list and count the elements
	 */
	while (h != NULL)
	{
		track_nodes++;
		h = h->next;
	}
	/*
	 * Finally, we would have to  return the 'track_nodes' as the result
	 */
	return (track_nodes);
}
