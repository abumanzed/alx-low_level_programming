#include "main.h"
/**
 * print_alphabet - Write a function that prints the alphabet, in lowercase,
 * followed by a new
 * Return: Always */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
        _putchar(letter);
	}
	_putchar('\n');
}
