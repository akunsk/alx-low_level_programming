#include "function_pointers.h"
#include <stdio.h>

/**
* array_iterator - executes a function given as a parameter on each element
* @array: array of integer
* @size: size of array
* @action: pointer to a function
* Return: nothing
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
