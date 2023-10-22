/*
 * File_name: 5-get_dnodeint.c
 * Created: 18th May, 2023
 * Auth: David James Taiye(Official0mega)
 * Size: undefined
 * Project: 0x17-doubly_linked_lists
 * Status: submitted.
 */

#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: pointer to the head or start of the doubly linked list
 * ....... and node to be freed
 * @index: represents the index of the node we want to retrieve from...
 * the doubly linked list.
 * Return: NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int node_count = 0;

	while (current != NULL)
	{
		/**
		 * Inside this Loop, the function checks if 'node_count'
		 * matches the 'index'.
		 * If they are equal, it means we have reached the desired
		 * Node.. in this case, the function returns current....
		 */
		if (node_count == index)
		{
			return (current);
		}
		current = current->next;
		node_count++;
	}
	/**
	 * If the loop completes without finding the desired node 'current'
	 * ...becomes NULL and the function will will return 'NULL'...
	 */
	return (NULL);
}
