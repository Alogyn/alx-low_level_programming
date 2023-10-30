#ifndef MAIN_H
#define MAIN_H

/* Standard Libreries */
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/* Task 0 */
ssize_t read_textfile(const char *filename, size_t letters);
/* Task 1 */
int create_file(const char *filename, char *text_content);
/* Task 2 */
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */
