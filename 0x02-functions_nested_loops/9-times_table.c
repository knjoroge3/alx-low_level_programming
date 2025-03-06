#include "main.h"

/**
*times_table - Prints the 9 times table
*
*Description: Prints the 9 times table
*
*Return: void
*/

void times_table(void)
{
int a, b, c;

a = 0;

while (a <= 9)
{
if (a <= 8)
{
_putchar('0');
_putchar(',');
_putchar(' ');
}
else
{
_putchar('0');
_putchar('$');
_putchar(' ');
}
a++;
}
_putchar('\n');

b = 0;

while (b <= 9)
{
c = 0;
if (c <= 9)
{
_putchar(c + '0');
_putchar(',');
_putchar(' ');
}

else
{
_putchar('0' + (c / 10));
_putchar('0' + (c % 10));
_putchar(',');
_putchar(' ');
}
b++;
}
_putchar('\n');
}
