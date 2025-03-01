#include "main.h"

/**
*print_last_digit - prints the last digit of a number
*
*@a: The value that is printed
*
*Return: Always 0
*
*/

int print_last_digit(int a)
{
int result;

if (a >= 0)
{
result = (a % 10);
_putchar(result + '0');
}
else
{
result = ((a % 10) * -1);
_putchar(result + '0');
}
return (result);
}
