#include <stdlib.h>
#include <time.h>

/* more headers goes there */

#include <stdio.h>

/* betty style doc for function main goes there */
/**
 *  main - check for conditions
 *
 *  Description: prints the results for the condition
 *
 * Return: return integer value 0
 *
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	/* your code goes there */

	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_dig)
	}