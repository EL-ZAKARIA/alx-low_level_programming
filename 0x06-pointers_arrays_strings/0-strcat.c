#include "main.h"

/**
 * *_strcat -> adds the dest string after the src string
 *
 * @dest: Destination
 * @src: Source
 *
 * Return: Dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
