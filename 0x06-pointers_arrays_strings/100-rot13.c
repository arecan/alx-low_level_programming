#include "main.h"
/**
 * print_number - print an int numbers.
 * @n: number tested
 * Return: Always 0.
 */
void print_number(int n)
{
	int i, j, digit, digits, power;
	unsigned int t, nchar, number;

	digit = 0;
	if (n < 0)
	{
		_putchar('-');
		t = -n;
	}
	else
	{
		t = n;
	}

	number = t;

	while (number >= 10)
	{
		number = number / 10;
		digit++;
	}
	digits = digit + 1;
	power = 1;
	i = 1;

	while (i < digits)
	{
		power = power * 10;
		i++;
	}
	j = power;
	while (j >= 1)
	{
		nchar = (t / j) % 10;
		_putchar(nchar + '0');
		j = j / 10;
	}
}
