#include <stdio.h>

/**
*main - Entry Point
*
*Return: Always 0
*
*only allowed to use putchar 3 times
*The code should print alphabets in lower case
*closely followed by alphabets in uppercase
*
*/

int main(void)
{
int a = 97;
int b = 65;

while (a >= 97 && a <= 122)
{
putchar(a);
a++;
}
while (b >= 65 && b <= 90)
{
putchar(b);
b++;
}
putchar('\n');
return (0);
}
