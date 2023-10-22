/*
 * File_name: 4-free_dlistint.c
 * Created: 18th May, 2023
 * Auth: David James Taiye(Official0mega)
 * Size: undefined
 * Project: alx-low_level_programming
 * Status: submitted.
 */

#include "lists.h"

/**
 * free_dlistint - Write a function that frees a dlistint_t list.
 * @head: pointer to the head or start of the doubly linked list
 * ....... and node to be freed
 * Return: NULL
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current != NULL)
	{
		dlistint_t *next = current->next;
		/*
		 * This stores the address of the next node in the list
		 * .....Then the loop will continue until current becomes NULL
		 */
		free(current);
		/*
		 * By using current and next, we can iterate through the list
		 *  Free each node and properly update the pointers..
		 *  ...to maintain the integrity of the doubly linked list.
		 */
		current = next;
	}
}
