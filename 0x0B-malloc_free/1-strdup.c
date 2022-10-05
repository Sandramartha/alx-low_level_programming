#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return a pointer to newly allocated memory
 * @str: a string given by main
 * Return: the pointer or null
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int kenny, i;
	/* confirm if str is null*/
	if (str == NULL)
	{
		return (NULL);
	}
	kenny = 0;
	/* while str is not equal to 0*/
	while (str[kenny] != '\0')
	{
		kenny++;
	}

	ptr = malloc(sizeof(char) * (kenny + 1));

	/*if malloc is null*/
	if (ptr == NULL)
	{
		return (NULL);
	}
	/* if malloc is not null start a for loop*/
	for (i = 0; i < kenny; i++)
	{
		ptr[i] = str[i];
	}
	ptr[kenny] = '\0';
	return (ptr);
}
