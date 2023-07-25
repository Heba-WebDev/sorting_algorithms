#include "sort.h"
/**
 * swap_nodes - swaps two nodes in a doubly linked list
 * @head: head of the list
 * @node1: node to swap
 * @node2: node to swap
 */
void swap_nodes(listint_t **head, listint_t *node1, listint_t *node2)
{
if (node1 == node2)
return;

node1->next = node2->next;
node2->prev = node1->prev;
node2->next = node1;
node1->prev = node2;

if (node2->prev != NULL)
{
node2->prev->next = node2;
}
else
{
*head = node2;
}

if (node1->next != NULL)
{
node1->next->prev = node1;
}
}


/**
 * insertion_sort_list - sorts a linked list by insertion sort algorithm
 * @list: list to sort
 */

void insertion_sort_list(listint_t **list)
{
int key;
listint_t *temp, *node;

if (!list || !*list || !((*list)->next))
return;

for (node = (*list)->next; node; node = node->next)
{
key = node->n;
temp = node;

while (temp->prev && (temp->prev->n > key))
{
swap_nodes(list, temp->prev, temp);
if (temp->prev && temp->prev->n < key)
{
temp = temp->prev;
}
print_list(*list);
}
}
}
