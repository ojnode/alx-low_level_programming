#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - program determing if number is greater than 5, less than 6 or 0
*
* Return: Always 0 (succes)
*
*/

int main(void)
{
int n, lastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastDigit = n % 10;
if (lastDigit > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
else if (lastDigit < 6 && lastDigit != 0)
printf("Last digit of %d is %d and is than 6 and is not 0\n", n, lastDigit);
else
printf("Last digit of %d is %d and is 0\n", n, lastDigit);

return (0);
}
