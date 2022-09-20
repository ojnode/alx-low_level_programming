#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse order
 * @s: A pointer to an int that will be changed
 *
 * Return: void which means our answer is correct
 */

void print_rev(char *s)
{
	int len = 0, i;

	while (s[i++])
		len++;

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
		_putchar('\n');
}
