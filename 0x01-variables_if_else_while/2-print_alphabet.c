#include <stdio.h>
/**
 *  main - Prints a random number and states whether
 *   prints the alphabet in lowercase, followed by a new line .
 *   Return: Always 0.
 */
int main(void)
{
char letter = 'a'; // Start with 'a'
while (letter <= 'z')
{
putchar(letter); // Print the current character
letter++;       // Move to the next character
}

putchar('\n'); // Print a newline character at the end
    return (0);
}

