#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * This function prints a string to the standard output.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, lastn;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastn = n % 10;
if (lastn > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, lastn);
if (lastn != 0 && lastn < 6)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastn);
if (lastn == 0)
printf("Last digit of %d is %d and is 0\n", n, lastn);
return (0);
}
