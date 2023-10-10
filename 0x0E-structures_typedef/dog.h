#ifndef DOG_H
#define DOG_H

/* Task 0 */

/**
  * struct dog - Structure class 'dog'
  *
  * @name: Pointer for the dog name (char)
  * @age: Pointer for the dog age (float)
  * @owner: Pointer for the dog owner (char)
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Task 1 */
void init_dog(struct dog *d, char *name, float age, char *owner);
/* Task 2 */
void print_dog(struct dog *d);
/* Task 3 */
typedef struct dog dog_t;
/* Task 4 */
dog_t *new_dog(char *name, float age, char *owner);
/* Task 5 */
void free_dog(dog_t *d);

#endif /* DOG_H */
