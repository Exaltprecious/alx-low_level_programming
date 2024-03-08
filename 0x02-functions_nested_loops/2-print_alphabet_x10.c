#include"main.h"

/**
 * print_alphabet_x10 - program entry starts here
 * Return: 0 if success, non zero if fail
 * _putchar: adds the characters
 */
void print_alphabet_x10(void)
{
	char la;
	int ten;

	for (ten = 0; ten <= 9; ten++)
	{
		for (la = 'a'; la <= 'z'; la++)
		{
			_putchar (la);
	if (la == 'z')
		_putchar ('\n');
	}
}
}
