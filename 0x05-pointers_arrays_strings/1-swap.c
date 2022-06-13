#include<stdio.h>
#include "main.h"
/**
*swap_int - swaps the values of two integers.
*@a: value to be assessed.
*@b: value to be assessed.
*Return: void.
*/
void swap_int(int *a, int *b)
{

	int n = *a;
	*a = *b;
	*b = n;
}
