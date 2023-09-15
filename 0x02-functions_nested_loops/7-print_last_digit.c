#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: a
 */
int print_last_digit(int n)
{
	int a;

	a = n % 10;
	if (n < 0)
		a = -a;
	_putchar(a + '0');

	return (a);
}