#ifndef LISTS_H
#define LISTS_H

/* Standard Libreries */
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
  * struct list_s - Structure single linked list
  *
  * @str: String pointer (char)
  * @length: String length (int)
  * @next: Strcture de the next node pointer (struct)
  */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* Task 0 */
size_t print_list(const list_t *h);
/* Task 1 */
size_t list_len(const list_t *h);

#endif /* LISTS_H */
