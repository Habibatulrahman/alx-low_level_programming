#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet in ten lines
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char abc;
	int n;

	for (n = 0; n <= 9; n++)
	{
		for (abc = 'a'; abc <= 'z'; abc++)
		{
			_putchar (abc);
		}
		_putchar ('\n');
	}
}
