#include <stdio.h>
/**
* main - prints lowcase and uppercase alphabets
*
*Return: always 0 (success)
*
*/

int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
putchar('\n');
for (letter = 'A'; letter <= 'Z'; letter++)
putchar(letter);
putchar('\n');
return (0);
}
