#include "lists.h"
#include<stdlib.h>
#include <stdio.h>
/**
  *insert_node - insert a new node
  *@head: head of the list
  *@number: to insert the new list
  *Return: pointer
  */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *New_node, *tmp;

	New_node = malloc(sizeof(listint_t));
	if (New_node == NULL)
		return (NULL);
	New_node->n = number;
	New_node->next = NULL;
	if (*head == NULL || (*head)->n > number)
	{
		New_node->next = *head;
		*head = New_node;
		return (New_node);
	}
	tmp = *head;
	while (tmp->next != NULL)
	{
		if (number >= tmp->n && number < tmp->next->n)
		{
			New_node->next = tmp->next;
			tmp->next = New_node;
			return (New_node);
		}
		tmp = tmp->next;
	}
	tmp->next = New_node;
	return (New_node);
}
