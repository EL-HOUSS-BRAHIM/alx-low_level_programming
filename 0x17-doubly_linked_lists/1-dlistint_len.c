#include "lists.h"
/**
 * dlistint_len - prints the number of elements in a linked dlistint_t list.
 *
 * @h: pointer to head of the list.
 * Return: number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *current;
size_t size = 0;
current = h;
while (current != NULL)
{
current = current->next;
size++;
}
return (size);
}
