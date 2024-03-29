#include "main.h"
/**
* _strncpy - copies a string by number of character
* @dest: a pointer to a character
* @src: a pointer toca character
* @n: value
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
