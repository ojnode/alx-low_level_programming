#include <stdio.h>
/**
*main - this program prints all alphabets except q and e
*
*Return: Always 0 (success)
*
*/
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'q' && letter != 'e')
putchar(letter);
}
putchar('\n');
}
