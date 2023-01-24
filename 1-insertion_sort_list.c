#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list using insertion sorting
 * @list: doubly linked list to sort
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *cur, *pre, *nextnode;

	if (list == NULL || !(*list) || (*list)->next == NULL)
		return;
	cur = (*list)->next;
	nextnode = cur->next;
	while (cur)
	{
		if (cur->n < cur->prev->n)
		{
			pre = cur->prev;
			while (pre && (cur->n < pre->n))
			{
				if (!(pre->prev))
				{
					pre->prev = cur;
					cur->prev->next = cur->next;
					if (cur->next)
						cur->next->prev = cur->prev;
					cur->next = pre;
					cur->prev = NULL;
					*list = cur;
				}
				else
				{
					cur->prev->next = cur->next;
					if (cur->next)
						cur->next->prev = cur->prev;
					pre->prev->next = cur;
					cur->prev = pre->prev;
					pre->prev = cur;
					cur->next = pre;
				}
				print_list(*list);
				pre = cur->prev;
			}
		}
		cur = nextnode;
		cur ? (nextnode = cur->next) : (nextnode = NULL);
	}
}
