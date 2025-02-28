#include <stdio.h>

/**
*main - Entry point
*
*Return: Always 0
*
*programme that prints lowercase alphabets in reverse
*Can on;y use putchar twice in the code
*/

int main(void)
{
int a = 122;

while (a >= 97)
{
putchar(a);
a--;
}
putchar('\n');

return (0);
}
