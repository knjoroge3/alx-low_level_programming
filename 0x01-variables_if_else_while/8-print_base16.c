#include <stdio.h>

/**
*main - Entry point
*
*Return: Always 0
*
* programme that prints all numbers of base 16
*/

int main(void)
{
int a = 48;
int b = 97;
while (a <= 57)
{
putchar(a);
a++;
}

while (b <= 102)
{
putchar(b);
b++;
}
putchar('\n');

return (0);
}
