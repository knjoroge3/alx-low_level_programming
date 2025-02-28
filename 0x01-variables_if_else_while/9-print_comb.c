#include <stdio.h>

/**
*main - Entry point
*
*Return: Always 0
*
*programme that prints allpossible cobinations of single
*digits in ascending order
* you can olly use putchar four times
*/

int main(void)
{
int a = 48;

while (a <= 57)
{
putchar(a);
if (a != 57)
{
putchar(',');
putchar(' ');
}
a++;
}
putchar('\n');

return (0);
}
