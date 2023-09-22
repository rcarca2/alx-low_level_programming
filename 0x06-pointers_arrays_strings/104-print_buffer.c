#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_buffer - add 2 strings.
 * @b: string1.
 * @size: string2.
 * Return: String with all letters in ROT13 base.
 */
void print_buffer(char *b, int size) {
    int i, j;

    if (size <= 0) {
        printf("\n");
        return;
    }

    for (i = 0; i < size; i += 10) {
        printf("%08x: ", i);

        // Print hexadecimal content
        for (j = i; j < i + 10; j++) {
            if (j < size)
                printf("%02x", (unsigned char)b[j]);
            else
                printf("  ");

            if (j % 2 == 1)
                printf(" ");
        }

        printf(" ");

        // Print ASCII characters
        for (j = i; j < i + 10; j++) {
            if (j < size) {
                char c = b[j];
                if (isprint(c))
                    printf("%c", c);
                else
                    printf(".");
            } else {
                printf(" ");
            }
        }

        printf("\n");
    }
}

int main(void) {
    char buffer[] = "This is a string!\0And this is the rest of the #buffer :)\1\2\3\4\5\6\7#cisfun\n\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x20\x21\x34\x56#pointersarefun #infernumisfun\n";
    
    printf("---------------------------------\n");
    print_buffer(buffer, sizeof(buffer));
    return 0;
}
}
