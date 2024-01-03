#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * check_cyc - checks if the list is cyclical
 * @list: pointer to list check
 * Return: 1 if cyclical, 0 it not
 */
int check_cyc(listint_t *list)
{
	listint_t *slow = list, *fast = list=
	
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}
	return(0);
}
