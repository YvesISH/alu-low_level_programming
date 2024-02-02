#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - function that print last digit of number
 * @n: The number in question
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar (last_digit + '0');

	return (last_digit);

}
