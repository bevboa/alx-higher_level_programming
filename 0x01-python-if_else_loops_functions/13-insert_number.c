#include <lists.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

listint_t *insert_node(listint_t **head, int number)

{
    listint_t *new_node;
    listint_t *current;

    if (!head)
        return NULL;

    new_node = malloc(sizeof(listint_t));
    if (!new_node)
        return NULL;

    new_node->n = number;
    new_node->next = NULL;

    if (!*head)
    {
        *head = new_node;
        return new_node;
    }

    current = *head;
    while (current->next && current->next->n < number)
        current = current->next;

    new_node->next = current->next;
    current->next = new_node;

    return new_node;
}
