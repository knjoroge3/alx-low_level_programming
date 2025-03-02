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
int minutes, hours;

hours = 0;

while (hours < 25)
{
minutes = 0;

while (minutes <= 59)
{
_putchar(minutes + '0');
minutes++;
}
_putchar(':');
_putchar(hours + '0');
hours++;
}
}
