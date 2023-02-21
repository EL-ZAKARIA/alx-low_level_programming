#include "main.h"

/**
 * print_last_digit - the lest digit of a number
 *@n: The number to be treated
 * Return: value of the digit
 */

int print_last_digit(int n)
{
	int lest;

	lest = n % 10;
	if (lest < 0)
	{
		lest = lest * -1;
	}
	_putchar(lest + '0');
	return (lest);
}
