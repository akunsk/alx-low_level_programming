#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: string to append by src
 * @src: string to append to dest
 * @n: input value
 *
 * Return: dest address
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
