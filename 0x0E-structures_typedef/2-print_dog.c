#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dog - function that prints a struct dog
 * @d: pointer to struct dog
 * Return: nothing (void)
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %1.f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
