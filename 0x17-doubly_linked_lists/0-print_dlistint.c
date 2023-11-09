#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to head of the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
    const dlistint_t *current;
    size_t size = 0;

    current = h;
    while (current != NULL)
    {
        printf("%d\n", current->n);
        current = current->next;
        size++;
    }

    return (size);
}
