#include "main.h"

/**
 * more_numbers - nmbr fct
 * owned by YuriTech82
 * Return: no return
 */

void more_numbers(void)
{

int i, j;
	for (i = 1; i <= 10; i++)
	{
		for (i = 1; i <= 10; i++)
		{
			if (j >= 10)
			_putchar('1');
			_putchar(j % 10 + '0');
		}
			_putchar('\n');
		}
}
