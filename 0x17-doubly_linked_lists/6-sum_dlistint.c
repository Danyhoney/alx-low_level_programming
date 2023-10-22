/*
 * File_name: 6-sum_dlistint.c
 * Created: 18th May, 2023
 * Auth: David James Taiye(Official0mega)
 * Size: undefined
 * Project: 0x17-doubly_linked_lists
 * Status: submitted.
 */

#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint -  Returns the sum of all the data (n) of a dlistint_t L/ list
 * @head: pointer to the head or start of the doubly linked list
 * ....... and node to be freed
 * Return: Always 0. (Success)
 */

int sum_dlistint(dlistint_t *head)
{

	/**
	 * we initialized a variable 'sum' to '0' to store the cumulative sum
	 * ..of the data values
	 */
	int sum = 0;
	dlistint_t *current = head;
	/**
	 * we also initialized 'current' pointer to the head of the node list
	 */

	while (current != NULL)
	{
		/**
		 * inside this loop, the function adds the data value of the
		 * current node ('curren->') to the 'sum' variable.. The it
		 * moves to the next node by updating 'current' to point
		 * ...to 'current->next'.
		 */
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
