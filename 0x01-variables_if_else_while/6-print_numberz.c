#include <stdio.h>
/**
* main - print single digits of base 10 using putchar
*
*Return: always 0 (success)
*/


int main(void)
{
int a;
for (a = 0; a < 10; a++)
putchar((a % 10) + '0');
putchar('\n');
return (0);
}
