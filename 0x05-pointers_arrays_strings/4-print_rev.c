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
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	for (i = count; i >= 0; i--)
		_putchar(s[1]);
	_putchar('\n');
}
