#ifndef SORTING_ALGOS_H
#define SORTING_ALGOS_H

/* Standard Libreries */
#include <stdlib.h>
#include <stdio.h>

/**
  * struct listint_s - Singly linked list
  *
  * @n: Integer
  * @index: Index of the node in the list
  * @next: Pointer to the next node
  *
  * Description: Singly linked list node structure
  */

typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
  * struct skiplist_s - Singly linked list with an express lane
  *
  * @n: Integer
  * @index: Index of the node in the list
  * @next: Pointer to the next node
  * @express: Pointer to the next node in the express lane
  *
  * Description: Singly linked list node structure with an express lane
  */

typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

/* Task 0 */
int linear_search(int *array, size_t size, int value);
/* Task 1 */
int binary_search(int *array, size_t size, int value);
/* Task 7 (Advanced) */
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif
