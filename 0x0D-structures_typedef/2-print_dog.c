#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: struct to print
 *
 * Return: None
 */
void print_dog(struct dog *d)
{
	struct dog *ptr;

	ptr = d;
	if (ptr == NULL)
		return;
	if ((*ptr).name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", (*ptr).name);
	if ((*ptr).age == 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %.1f\n", (*ptr).age);
	if ((*ptr).name == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", (*ptr).owner);
}
