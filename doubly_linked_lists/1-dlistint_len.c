#include "lists.h"
/**
 * dlistint_len - Return the number of elements in a dlistint_t list.
 * @h: pointer to the head of the doubly linked list.
 *
 * Return: The number of elements in the list.
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
