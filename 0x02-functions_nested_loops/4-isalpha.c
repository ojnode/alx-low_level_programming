include "main.h"
/**
*_isalpha -checks if a character is n alphabet
*@c: character to be checked
*
*Return: 1 if c is an alphabet or 0 if otherwise
*/
int _isalpha(int c)
{
((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
return (1);
else
return (0);
}
