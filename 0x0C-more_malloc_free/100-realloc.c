#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the memory previously allocated with malloc.
 * @old_size: Size, in bytes, of the allocated space for ptr.
 * @new_size: New size, in bytes, of the new memory block.
 *
 * Return: Pointer to the reallocated memory block.
 *     NULL if new_size is zero and ptr is not NULL, or if malloc fails.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		nptr = malloc(new_size);

		if (nptr == NULL)
			return (NULL);

		return (nptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
		nptr = malloc(new_size);
		if (nptr == NULL)
			return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
		{
			nptr[i] = ((char *) ptr)[i];
		}
		free(ptr);
		return (nptr);
	}
}

