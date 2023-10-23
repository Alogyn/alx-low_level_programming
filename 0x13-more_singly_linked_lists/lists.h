#ifndef LISTS_H
#define LISTS_H

/* Standard Libreries */
#include <stdio.h>
#include <stdlib.h>

/**
  * struct listint_s - singly linked list
  *
  * @n: integer
  * @next: points to the next node
  *
  * Description: singly linked list node structure
  */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* Task 0 */
size_t print_listint(const listint_t *h);
/* Task 1 */
size_t listint_len(const listint_t *h);
/* Task 2 */
listint_t *add_nodeint(listint_t **head, const int n);
/* Task 3 */
listint_t *add_nodeint_end(listint_t **head, const int n);
/* Task 4 */
void free_listint(listint_t *head);
/* Task 5 */
void free_listint2(listint_t **head);
/* Task 6 */
int pop_listint(listint_t **head);
/* Task 7 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
/* Task 8 */
int sum_listint(listint_t *head);

#endif /* LISTS_H */
