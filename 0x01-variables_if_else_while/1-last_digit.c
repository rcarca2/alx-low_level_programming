#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints a random number and states whether
 *        and is less than 6 and not 0 , and is 0 , and is greater than 5 .
 * Return: Always 0.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n > 5)
printf(n ,"and is greater than 5\n");
if (n == 0)
printf(n ,"and is 0\n")
if (n > 0 && n < 6)
printf(n ,"and is less than 6 and not 0\n")
	return (0);
}
