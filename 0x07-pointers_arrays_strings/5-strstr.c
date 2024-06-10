#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: char array
 * @needle: char array (keyword)
 * Return: array
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *duplicate = haystack;
		char *pattern = needle;

		while (*haystack == *pattern && *haystack != '\0' && *pattern != '\0')
		{
			haystack++;
			pattern++;
		}
		if (*pattern == '\0')
		{
			return (duplicate);
		}
		haystack = duplicate + 1;
	}
	return (0);
}

