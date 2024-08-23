/**
*main -	Entry point
*
*Return: Always success (0)
*/

#include <stdio.h>

int main(void)
{
char a = 97;
while (a >= 97 && a <= 122)
{
putchar(a);

a += 1;

if (a == 101 || a == 113)
{
a += 1;
}
}

putchar('\n');
return (0);
}
