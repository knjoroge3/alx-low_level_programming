#include <stdio.h>

/**
*main -Entry point
*
*Return: Always 0
*
*print all lower alphabet characters
*Except q and e and use putchar twice
*
*/

int main(void)
{
int a = 97;

while (a <= 122)
{
if (a != 101 && a != 113)
{
putchar(a);
}
a++;
}
putchar('\n');

return (0);

}
