#include <stdio.h>

/**
*main - Entry point
*
*Return: Always (0)
*
*programme that prints all possible combinations of three digits
*digits must be different
*01 and 10 are considered the same combination of two digits o an 1
*you can use putchar only five times in the code
*
*/

int main(void)
{
int a = 48, b, c;

while (a <= 55)
{
b = a + 1;
while (b <= 56)
{
c = b + 1;
while (c <= 57)
{
putchar(a);
putchar(b);
putchar(c);
if (a != 55 || b != 56 || c != 57)
{
putchar(',');
putchar(' ');
}
c++;
}
b++;
}
a++;
}
putchar('\n');

return (0);
}
