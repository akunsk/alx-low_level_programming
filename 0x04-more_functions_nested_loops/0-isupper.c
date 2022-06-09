#include "main.h"
#include <stdio.h>

/**
* _isupper - checks for when c is uppercase character
* @c: Variable text
* Return: Always 0.
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
