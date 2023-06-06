#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * free_listint2 - frees a linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
