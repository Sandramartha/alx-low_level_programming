#include "main.h"

/**
* cap_string - capitalizes all words of a string
* @s: inputs string
* Return: the pointer to s.
*/

char *cap_string(char *s)
{
	int count = 0, i;
	int separators[] {32, 9, 10, 44, 59, 46, 33, 63, 64, 40, 41, 123, 125};

	if (*(s + count) >= 97 && *(s + count) <= 122)

		*(s + count) = *(s + count) - 32;

	counter++;

	while (*(s + count) != '\n')
	{

		for (i = 0; i < 13; i++)

		{
			if
				(*(s + count) == separators[i])
			{

if ((*(s + (count + 1)) >= 97) && (*(s + (count + 1)) <= 122))

	*(s + (count + 1)) = *(s + (count + 1)) - 32;

				break;
			}

		}
		count++;
	}
	return (s);

}

