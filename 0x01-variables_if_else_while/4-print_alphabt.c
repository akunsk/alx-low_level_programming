#include <stdio.h>
#include <ctype.h>
/**
 * main - return alphabets expect e and q
 *
 * Description: print the required results
 *
 * Return: interger value 0
 *
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'Z'; ch++)
	{
		if (ch != '0' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
