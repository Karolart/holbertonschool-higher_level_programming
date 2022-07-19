#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *list_len - count the number of elements in a list
 *@h: head of a linked list
 *Return: the number of elements into the list
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}

	return (counter);
}
