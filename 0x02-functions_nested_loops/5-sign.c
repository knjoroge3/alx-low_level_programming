/**
*print_sign - returns the sign and number
*
*@n: the int to be returned
*
*description: prints sign of a number
*
*Return: Always (0) success
*/

#include <stdio.h>
#include "main.h"

int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
_putchar('\n');
}
else if (n == 0)
{
_putchar(48);
return (0);
_putchar('\n');
}
else if (n < 0)
{
_putchar(45);
return (-1);
_putchar('\n');
}
return (0);
}
