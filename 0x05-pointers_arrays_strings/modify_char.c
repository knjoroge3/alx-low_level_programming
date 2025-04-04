#include <stdio.h>

/**
 * modif_my_char_var - Solve me
 *
 * Return: nothing.
 */
void modif_my_char_var(char *cc, char ccc)  
{
	printf("The vlaue of *cc is currently %c and its address is %p\n", *cc, &*cc);

	*cc = 'o';
	ccc = 'l';
	
	printf("Now the address of *cc is %p and has a changed value of %c\n", &*cc, *cc);
	printf("And we also have a character variable ccc which has a value of %c and address is %p\n", ccc, &ccc);
}

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;
	char *p;
	
	p = &c;
	c = 'H';
	
	printf("The value of c is %c and its address is %p\n", c, &c);
	printf("The value of p is %s and its address is %p\n", p, &p);
	printf("But p points to the address of c and this is why its value is %c\n", *p);

	modif_my_char_var(p, c);
	
	return (0);
}
