#include "main.h"
/**
*print_alphabet_x10 - prints alphabet 10x in lowercase
*/
void  print_alphabet_x10(void)
{
int letters;
int number;
for (number = 0; number <= 9; number++)
{
for (letters = 'a'; letters <= 'z'; letters++)
{
_putchar(letters);
}
_putchar('\n');
}
}
