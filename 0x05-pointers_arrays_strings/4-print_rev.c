#include "main.h"
/**
* prints_rev - prints a string in reverse
* @s: string to be printed
*
* Return: 0
*
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		s++;
	for (i = i - 1, i >= 0; i--)
		_putchar(s[1]);

	_putchar('\n');
}
