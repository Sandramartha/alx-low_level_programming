#include "main.h"

/**
* leet - encodes a string into 1337
* @Night: string i used
* Return: night
*/

char *leet(char *Night)
{
	int count = 0, i;

	int lower_case[] = {97, 101, 111, 116, 108};
	int upper_case[] = {65, 69, 79, 84, 76};

	int numbers[] = {52, 51, 48, 55, 49};

	while (*(Night + count) != '\0')
	{
		for (i = 0, i < 5, i++)
		{
			if (*(Night + count == lower_case[i] || *(Night + count) == upper_case[i])
			{

			*(Night + count) = numbers[i];
			break;
			}
		}
		count++;
	}
	return (Night);
}
