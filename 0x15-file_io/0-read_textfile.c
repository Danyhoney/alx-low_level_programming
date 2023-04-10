#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list.
 *
 * Return: the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_ptr;
	listint_t *fast_ptr;
	listint_t *start_ptr;

	if (head == NULL)
	{
		printf("Error: head is NULL\n");
		return (NULL);
	}

	slow_ptr = head;
	fast_ptr = head;
	start_ptr = head;

	while (slow_ptr && fast_ptr && fast_ptr->next)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;

		if (slow_ptr == fast_ptr)
		{
			while (1)
			{
				fast_ptr = start_ptr;

				while (fast_ptr->next != slow_ptr && fast_ptr->next != start_ptr)
				{
					fast_ptr = fast_ptr->next;
				}

				if (fast_ptr->next == slow_ptr)
					break;

				start_ptr = start_ptr->next;
			}
			return (fast_ptr->next);
		}
	}

	return (NULL);
}
