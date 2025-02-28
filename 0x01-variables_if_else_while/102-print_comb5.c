#include <stdio.h>

/**
*main - Entry point
*
*Return: Always (0)
*
*programme that prints all possible combinations of two digits
*digits must be different
*01 and 10 are considered the same combination of two digits o an 1
*you can use putchar only five times in the code
*
*/

int main(void)
{
int a = 48, b;

while (a <= 56)
{
b = a + 1;
while (b <= 57)
{
putchar(a);
putchar(b);
if (a != 56 || b != 57)
{
putchar(',');
putchar(' ');
}
b++;
}
a++;
}
putchar('\n');

return (0);
}
