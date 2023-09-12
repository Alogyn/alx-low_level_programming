#include "main.h"

/*
 * Task 8. I'm federal agent Jack Bauer,
 * and today is the longest day of my life
 */

/**
  * jack_bauer - Beginning/Starting point
  *
  * Objectif: Print every minute of the day of Jack Bauer,
  * starting from 00:00 to 23:59
  *
  * Return: Empty
  */

void jack_bauer(void)
{
	/* Variables Declaration */
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
