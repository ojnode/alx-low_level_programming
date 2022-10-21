#include "lists.h"

/*
 * add_node_end - adds a new node to end of link list
 * @head: pointer of pointer to linked ist
 * @str: string to be add to linked list
 *
 * Return: list_t
 */

list_t *add_note_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t nchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	return (NULL);

	new->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
	;
	new ->len = nchar;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
	while (temp->next != NULL)
	temp = temp->next;
	temp->next = new;
	}
	return (*head);
}
