#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point of the program
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
int lastDigit = n % 10;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (lastDigit > 5)
{
printf("Last digit of %d and is greater than 5\n", n);
}
else if (lastDigit == 0)
{
printf("Last digit of %d and is 0\n", n);
}
else if (lastDigit < 6)
{
printf("Last digit of %d and is less than 6 and not 0\n", n);
}

return (0);
}
