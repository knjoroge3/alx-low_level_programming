/**
*print_alphabet - function that print alphabet
*it prints in lowercase
*Return: no return
*/


#include <stdio.h>
#include "main.h"

void print_alphabet(void)
{
char a = 97;

while (a >= 97 && a <= 122)
{
_putchar(a);
a++;
}
_putchar('\n');
}
