#include "main.h"

/**
*jack_bauer - Function to print all minutes and hours
*
*Description: Prints all minutes and hours within 24 hours
*
*Return: Void
*/

void jack_bauer(void)
{
int hour1, hour2, minute1, minute2;

hour1 = 0;

while (hour1 <= 2)
{
hour2 = 0;

while (hour2 <= 9 && (hour1 < 2 || (hour1 == 2 && hour2 <= 3)))
{
minute1 = 0;
{
while (minute1 <= 5)
{
minute2 = 0;
while (minute2 <= 9)
{
_putchar(hour1 + '0');
_putchar(hour2 + '0');
_putchar(':');
_putchar(minute1 + '0');
_putchar(minute2 + '0');
_putchar('\n');
minute2++;
}
minute1++;
}
hour2++;
}
}
hour1++;
}
}
