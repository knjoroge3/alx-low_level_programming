#include "main.h"

/**
*_isalpha - check for lowercase or uppercase character
*
*@c: Character defination of the argument
*
*Return: returns 1 if c is lowercase or uppercase otherwise it returns 0
*
*/

int _isalpha(int c)
{

if (c >= 65 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
