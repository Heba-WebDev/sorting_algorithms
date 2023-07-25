#include "sort.h"

/**
 * swap_nodes - swaps two nodes of a linked list
 * @head: head of the linked list
 * @node1: first node to swap
 * @node2: second node to swap
 */
void swap_nodes(listint_t **head, listint_t **node1, listint_t *node2)
{

(*node1)->next = node2->next;
if (node2->next != NULL)
node2->next->prev = *node1;

node2->prev = (*node1)->prev;
node2->next = *node1;

if ((*node1)->prev != NULL)
{
(*node1)->prev->next = node2;
}
else
{
*head = node2;
}
(*node1)->prev = node2;
*node1 = node2->prev;
}

/**
 * insertion_sort_list - sorts data
 * @list: a pointer to a list
 *
 */

void insertion_sort_list(listint_t **list)
{

listint_t *head, *previous, *temp;

if (list == NULL || *list == NULL || (*list)->next == NULL)
return;

for (head = (*list)->next; head != NULL; head = temp)
{
temp = head->next;
previous = head->prev;
}

while (previous && head->n < previous->n)
{
swap_nodes(list, &previous, head);
print_list((const listint_t *)*list);
}
}
