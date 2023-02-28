#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int length = 0;
	char *a = str;
	int i;
	int j = 0;

	while (*a != '\0')
	{
		a++;
		length++;
	}
	j = length - 1;
	for (i = 0 ; i <= j ; i++)
	{
		if (i % 2 == 0)
	{
		_putchar(str[i]);
	}
	}
	_putchar('\n');
}

