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
int num1 = 0, num2;

while (num1 <= 98)
{
num2 = num1 + 1;
while (num2 <= 99)
{
putchar((num1 / 10) + '0');
putchar((num1 % 10) + '0');
putchar(' ');
putchar((num2 / 10) + '0');
putchar((num2 % 10) + '0');

if (num1 != 98 || num2 != 99)
{
putchar(',');
putchar(' ');
}
num2++;
}
num1++;
}

putchar('\n');
return (0);
}
