#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/* Libreries */
#include <stddef.h>

/* Task 0 */
void print_name(char *name, void (*f)(char *));
/* Task 1 */
void array_iterator(int *array, size_t size, void (*action)(int));
/* Task 3 */
int int_index(int *array, int size, int (*cmp)(int));

#endif /* FUNCTION_POINTERS_H */
