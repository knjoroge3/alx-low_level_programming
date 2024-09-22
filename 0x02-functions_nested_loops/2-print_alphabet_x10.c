
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */

#include <stdio.h>
#include "main.h"

void print_alphabet_x10(void)
{
char a;

int j = 0;

for (j = 0; j <= 9; j++)
{
a = 97;
while (a >= 97 && a <= 122)
{
_putchar(a);
a++;
}
_putchar('\n');
}
}
