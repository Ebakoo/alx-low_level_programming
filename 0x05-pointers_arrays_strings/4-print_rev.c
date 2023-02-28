#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int length = 0;
	int j;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (j = length; j > 0; j--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
