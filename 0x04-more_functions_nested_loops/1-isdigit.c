#include "main.h"

/**
 * main - checks for a digit (0 through 9)
 * Returns 1 if c is a digit
 * Return: Always 0.
 */
int _isdigit(int c)
{
if ((c >= 0) && (c <= 9))
return (1);

return (0);
}
