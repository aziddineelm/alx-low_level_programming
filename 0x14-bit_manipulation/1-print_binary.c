#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be converted
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 0;
	int size = sizeof(n) * 8 - 1, flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	mask = 1UL << size;

	while (mask != 0)
	{
		if ((n & mask) != 0)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag == 1 || mask == 1)
			_putchar('0');
		mask = mask >> 1;
	}
}
