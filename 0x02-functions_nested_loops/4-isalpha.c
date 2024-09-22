/**
*_isalpha- checks for all aphabet characters
*
*@c: int for holding value of c
*
*description: returns all aphabet characters
*
*Return: Always (0) success
*/

#include <stdio.h>
#include "main.h"

int _isalpha(int c)
{

if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
else
{
return (0);
}
}
