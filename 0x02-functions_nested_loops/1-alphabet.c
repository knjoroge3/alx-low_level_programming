/**
*print_alphabet - Functions that prints alphabet in lowercase
*
*Description: Prints the alphabet in lowercase
*
*Return: void
*
*/

void print_alphabet(void)
{
int a = 97;

while (a >= 97 && a <= 122)
{
_putchar(a);
a++;
}
_putchar('\n');

}
