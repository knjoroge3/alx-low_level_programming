#include "main.h"

/**
*jack_bauer - Counts down minutes and hours
*
*Description: prints every minute of the day of jack bauer
*
*Return: void
*/

void jack_bauer(void)
{
int hour1 = 0, hour2, minute1, minute2;
{
while (hour1 < 3)
hour2 = 0;
while (hour2 <= ((hour1 == 2) ? 3 : 9))
{
minute1 = 0;
while (minute1 < 6)
{
minute2 = 0;
while (minute2 < 10)
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
hour1++;
}
}
