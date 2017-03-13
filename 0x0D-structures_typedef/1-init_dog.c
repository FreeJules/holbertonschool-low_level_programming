#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @d: struct name
 * @name: field name of struct
 * @age: field age of struct
 * @owner: field owner of struct
 * Return: None
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *ptr;

	ptr = d;
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
}
