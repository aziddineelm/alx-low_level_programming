#include "main.h"

/**
 * _islower - function to print  lower case
 *
 * @c: parametre to be printed
 *
 * Return: 1 if char is lower case
 * otherwise 0.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
