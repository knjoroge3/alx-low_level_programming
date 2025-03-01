#include "main.h"

/**
*print_alphabet_x10 - prints the alphabe in lowercase 10 times
*
*Description: uses _putchar twice in the programme
*
*Return: Void
*/

void print_alphabet_x10(void)
{
int a = 97, newline = 0;

while (newline >= 0 && newline <= 9)
{
while (a >= 97 && a <= 122)
{
_putchar(a);
a++;
}
_putchar('\n');
}
