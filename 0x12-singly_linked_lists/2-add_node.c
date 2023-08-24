#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a node at the beginning of a list
 * @head: double pointer
 * @str: the string that received the new node
 *
 * Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;/*declare new node*/

	if (str == NULL)/*string cant be empty*/
		return (NULL);

	new_node = malloc(sizeof(list_t));/*initialize new node to size of  list*/
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);/*duplicate the string with strdup*/
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = *head;/*change position of the head to the new node*/
	*head = new_node;

	return (new_node);
}
