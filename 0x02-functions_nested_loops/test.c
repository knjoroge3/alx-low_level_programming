#include <stdio.h>
#include "main.h"

void print_alphabet(void);

int main(void)
{
    print_alphabet();
    return (0);

}

void print_alphabet(void)
{
    char a = 97;

    while(a >= 97 && a <= 122)
    {
        _putchar(a);
        a++;
    }
    _putchar('\n');
}