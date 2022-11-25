#include <stdio.h>
#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_list -> a function that frees a list
 *
 * @head: A pointer to the first node of the list to free
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
