/**
*_islower- Checks for lowercase
*@c: character integer
*
*description: checks for all lowercase characters and prints them
*
*Return: Always (0) success
*/

#include <stdio.h>
#include "main.h"

int _islower(int c)
{

if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
