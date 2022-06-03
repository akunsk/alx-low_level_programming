#include <stdio.h>
#include <ctype.h>
/**
 * main - print integer from 0 to 10
 *
 * Description: return the required results
 *
 * Return: prints integer 0
 *
 */
int main(void)
{
	int var;

	for (var = 0; var < 10; var++)
	{
		printf("%d", var);
	}
	putchar('\n');
	return (0);
}
