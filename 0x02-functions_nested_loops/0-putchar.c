#include "main.h"

/**
 * main - print _putchar
 * written by Eba
 * Return: 0
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}

