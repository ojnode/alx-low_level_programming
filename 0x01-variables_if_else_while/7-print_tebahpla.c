#include <stdio.h>
/**
*main - program that prints z to a
*
*Return: Always 0
*/
int main(void)
{
char letter;
for (letter = 'z' ; letter >= 'a'; letter--)
putchar(letter);
putchar('\n');
return (0);
}
