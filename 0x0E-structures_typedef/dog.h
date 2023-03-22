#ifndef DOG_H
#define DOG_H

/**
 *struct dog - struct that defines a dog
 *@name: dog's name
 *@age: dog's age
 *@owner: dog's owner
 *Description: struct called "dog" that defines basic info about a dog
*/


struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

/* function prototype */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
