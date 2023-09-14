#include "main.h"
#include "main.h"
/**
*print_numbers - function that print all numbers from
*0 to 9
*Do not print 2 and 4
*Return: returns nothing
*/
void print_most_numbers(void);
{
int number = 48;
for (number = 48; number < 58; number++)
{
if ((number != 50) && (number != 52))
{
_putchar(number);
}
}
_putchar(10);
}
