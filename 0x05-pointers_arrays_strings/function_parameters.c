#include <stdio.h>

/**
 * modif_my_char_var - Solve me
 *
 * Return: nothing.
 */
void modif_my_char_var(char *cc, char ccc)  
{
   *cc = 'o';
   ccc = 'l';
}

/**
 * main - Solved  by Kennedy Njoroge, the one and only.
 *
 * Return: Always 0.
 */
int main(void)
{
   char c;
   char *p;

   p = &c;
   c = 'H';

   printf("The address of c is  %p\n", &c);
   printf("The value of c is %c\n", c);
   printf("The address of *p is %p\n", &p);
   printf("The value of p is %p\n", p);

   modif_my_char_var(p, c);

   printf("addres of p is %p\n", &p);
   printf("vaalue of p is %p\n", p);
   printf("Value of c is now %c\n", c);

   return (0);
}
