/**
*main -Entry point
*
*Return: Always (0) Success
*/

#include <stdio.h>
#include <unistd.h>

int main(void)
{
const char message = "and that piece of art is useful\" - Dora Korpar, 2015-\
10-19";
write(STDOUT_FILENO, message, 59);

return (1);
}
