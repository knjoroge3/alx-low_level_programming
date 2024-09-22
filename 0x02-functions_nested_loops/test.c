#include <stdio.h>
#include "main.h"

void print_alphabet(void);

int main(void)
{
print_alphabet_x10();
return (0);

}

void print_alphabet_x10(void)
{
char a = 97;

int j = 0;

for(j = 0; j <= 9; j++)
{
a = 97;

while (a >= 97 && a <= 122)
{
_putchar(a);
a++;
}
_putchar('\n');
}
}