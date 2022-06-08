#include "main.h"

/**
 *print_alphabet_10x -> prints alphabets 10 x
 */

void print_alphabet_10x(void)
{
	int j;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		putchar('\n');
	}
}
