#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - check the the entry to deteminate if is lower or upper
 *
 * @n: This is the entry
 * Return: Always 0.
 */

void print_to_98(int n)
{
	if (n <= 98)
		for (; n <= 97; n++)
			printf("%d, ", n);
	else
		for (; n > 98; n--)
			printf("%d, ", n);
	printf("98\n");
}
