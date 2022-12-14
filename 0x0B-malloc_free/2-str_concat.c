#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: Null if not successful
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int kenny1 = 0, kenny2 = 0;
	char *ptr, *cbx;

	ptr = s1;

	if (s1)
		while (*ptr++)
			kenny1++;
	else
		s1 = "";
	ptr = s2;
	if (s2)
		while (*ptr++)
			kenny2++;

	else
		s2 = "";
	cbx = malloc(kenny1 + kenny2 + 1);
	if (!cbx)
		return (NULL);
	ptr = cbx;
	while (*s1)
		*ptr++ = *s1++;
	while (*s2)
		*ptr++ = *s2++;
	*ptr = 0;

	return (cbx);
}
