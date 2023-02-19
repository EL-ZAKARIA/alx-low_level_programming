#include <unistd.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char hex;

	hex = '0';
	while (hex <= 'f')
	{
		if (hex <= '9' || hex >= 'a')
		{
			putchar(hex);
		}
		hex++;
	}
	putchar('\n');
	return (0);
}
