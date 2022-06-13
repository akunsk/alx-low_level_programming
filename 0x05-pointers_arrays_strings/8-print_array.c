#include<stdio.h>
#include "main.h"
/**
 *print_array - prints elements of an array of integers.
 *@a: value to be assessed.
 *@n: value to be assessed.
 *Return: void.
 */
void print_array(int *a, int n)
{
	int p;

	for (p = 0 ; p < n; p++)
	{
		printf("%d", a[p]);
		if (p != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
