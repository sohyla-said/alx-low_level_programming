#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: an input
 * @age: an input
 * @owner: an input
 * Return: pounter to a newly created struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *cpyname, *cpyowner;
	int len_name = strlen(name), len_owner = strlen(owner), i;

	if (name == NULL || owner == NULL)
		return (NULL);
	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);
	cpyname = malloc(len_name + 1);
	if (cpyname == NULL)
		return (NULL);
	for (i = 0; i < len_name; i++)
		cpyname[i] = name[i];
	cpyname[len_name] = '\0';

	cpyowner = malloc(len_owner + 1);
	if (cpyowner == NULL)
		return (NULL);
	for (i = 0; i < len_owner; i++)
		cpyowner[i] = owner[i];
	cpyowner[len_owner] = '\0';

	new_dog->name = cpyname;
	new_dog->owner = cpyowner;
	new_dog->age = age;
	return (new_dog);
}
