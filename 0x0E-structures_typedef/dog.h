#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog struct
 *
 * @name: the dog name
 * @age: the dog age
 * @owner: the dog owner
 *
 * Desciption: just a lone dog struct in a big kitty world
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
