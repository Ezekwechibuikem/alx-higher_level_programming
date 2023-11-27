#include "lists.h"
#include <stdio.h>
/**
 *
 *
 */
int check_cycle(listint_t *list)
{
	listint_t *fast = lsit, *slow = lists;
	
	while(fast != NULL && slow != NULL && fast->next != NULL)
	[
		slow = slow->next
