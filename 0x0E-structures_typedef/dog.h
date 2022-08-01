#ifndef DOG_H
#define DOG_H
/**
 * struct dog - defining a dog structure
 * @name: string properties of dog
 * @age: integer properties of dog
 * @owner: string properties of dog
 */
typedef struct dog my_dog
{
	char *name;
	float *age;
	char *owner;
}

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
my_dog *new_dog(char *name, float age, char *owner);
void free_dog(my_dog *d);

#endif
