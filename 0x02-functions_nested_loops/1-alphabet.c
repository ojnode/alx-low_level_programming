#include <stdio.h>
/**
* main - print the alphabet
*
* Return : always 0 (success)
*/
void print_alphabet(void)
{
char letters;
for (letters = 'a'; letters = 'z'; letters++)
{
putchar(letters);
}
putchar('\n');
}
