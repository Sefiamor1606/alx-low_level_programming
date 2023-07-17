#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure representing a dog.
 * @name: Pointer to the name of the dog.
 * @age: Age of the dog.
 * @owner: Pointer to the owner of the dog.
 *
 * Description: The struct dog represents a dog with its name, age, and owner.
 */
struct dog

{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog.
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(const char *s);
char *_strcpy(char *dest, const char *src);
void print_dog(struct dog *d);

#endif /* DOG_H */

