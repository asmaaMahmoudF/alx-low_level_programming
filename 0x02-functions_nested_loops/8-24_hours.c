#include "main.h"
/**
* entry point: jack_bauer prints every minute of the day
* Description: prints every minute of the day
* Return: void success
*/
void jack_bauer(void)
{
int min, hr;
for (hr = 0; hr <= 23; hr++)
{
for (min = 0; min <= 23; min++)
{
_putchar((hr / 10) + '0');
_putchar((hr % 10) + '0');
_putchar(':');
_putchar((min / 10) + '0');
_putchar((min % 10) + '0');
_putchar('\n');
}
