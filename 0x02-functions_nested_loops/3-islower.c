#include "main.h"
/**
*int _islower - check if character is lowercase
*@c: character to be checked
*
*Return: 1 if the character is lowercase or 0
*/
int _islower(int c);
{
if (c > 'a' && c < 'z')
return (1);
else
return (0);
}
