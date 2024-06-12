#include"main.h"

/**
 * _isupper - uppercase letters checker
 * Return: 0 if success, non zero if error
 * @c: char to check
 * else Return 1 if c is upperase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
