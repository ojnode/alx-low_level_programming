#include "main.h"
/**
*print_alphabet - print the alphabet
*
* Return : always 0 (success)
*/
void print_alphabet(void)
{
char letters;
for (letters = 'a'; letters <= 'z'; letters++)
{
_putchar(letters);
}
_putchar('\n');
}
