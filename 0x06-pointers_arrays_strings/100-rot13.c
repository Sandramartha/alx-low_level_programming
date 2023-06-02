#include "main.h"

/**
* rot13 - encodes a string using rot 13.
* @s: input string
* Return: the pointer to dest
*/

char *rot13(char *s)

{
	int count = 0, i;

	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCEDEFGHIJKLMNOPQRSTUVWXYZ";

	char rot[13] = "nopqrstuvwxyzabcdefghijklnmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + count) != '\0')

	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + count) == alphabet[i])
			{
				*(s + count) = rot13[i];
				break;
			}

		}

		count++;
	}
	return (s);
}
