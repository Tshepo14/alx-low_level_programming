#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @str: The string to be duplicated and stored in the new node.
 *
 * Return: Address of the head, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new;
    size_t nchar;

    new = malloc(sizeof(list_t));
    if (new == NULL)
        return (NULL);

    new->str = strdup(str);
    if (new->str == NULL)
    {
        free(new);
        return (NULL);
    }

    for (nchar = 0; str[nchar]; nchar++)
        ;

    new->len = nchar;
    new->next = *head;
    *head = new;

    return (*head);
}
