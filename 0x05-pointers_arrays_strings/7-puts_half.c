#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints every other character of a string
 * @str: A ponter to an int that will be changed
 *
 * Return: void which means out answer is correct
 */
void puts_half(char *str)
{
	int i, last;

	i = 0;
	while (str[i] != '\0')
	{
	i++;
	}
	last =  (i + 1) / 2;

	for (i = last; str[i]; i++)
	{
	putchar (str[i]);
	}
	putchar ('\n');
}
