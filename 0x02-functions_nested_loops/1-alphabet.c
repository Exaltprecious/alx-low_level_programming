#include"main.h"

/**
 * print_alphabet - prints the alpha in lower case
 * return: void  if successful, else 1
 */
void print_alphabet(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		_putchar (la);
	}
	_putchar ('\n');
}
