#include "function_pointers.h"
/**
* array_iterator - executes a function given as a parameter on each element
* @array: array of integer
* @size: size of array
* @action: pointer to a function
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
