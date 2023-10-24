#include "main.h"

/**
 * malloc_checked - function that allocates memory
 * @b: number of memory to be allocated
 * Return: Void
 */

void *malloc_checked(unsigned int b)
{
	void *sandra;/*void pointer*/

	sandra = malloc(b);/*allocates memory of b*/

	if (sandra == NULL)/* if sandra is null terminates with exit*/
	{
		exit(98);/* exit function terminates the call immediately*/
	}
	return (sandra);/* return pointer if malloc is sucessful*/
}
