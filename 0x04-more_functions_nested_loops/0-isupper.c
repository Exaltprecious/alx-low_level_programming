#include "main.h"
/**
 * _isupper - check for upper case charcter
 * @c:varible txt
 * Return:Always 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
