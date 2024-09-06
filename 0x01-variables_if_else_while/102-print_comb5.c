/**
*main - Entry point
*
*Return: Always (0) success
*/

#include <stdio.h>

int main(void)
{
int a = 0;
int b;

while (a < 99)
{
j = a + 1;
while (j < 99)
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
putchar(' ');
putchar((j / 10) + '0');
putchar((j % 10) + '0');
if (i != 98 || j != 99)
{
putchar(',');
putchar(' ');
}
j++;
}
i++;
}
putchar('\n');
return (0);
}
