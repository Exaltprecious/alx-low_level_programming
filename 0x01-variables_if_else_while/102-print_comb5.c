#include<stdio.h>
/**
 * main- entry point
 * Description: prints all possible combinations of
 * two-digit numbers
 * Return: 0success, non zero for fail
*/
int main(void)
{
	int ifirst;
	int i;
	int jfirst;
	int j;

	for (ifirst = 48; ifirst < 58; ifirst++)
	{
		for (i = 48; i < 58; i++)
		{
			j = i + 1;
			jfirst = ifirst;
			for (; jfirst < 58; jfirst++)
			{
				for (; j < 58; j++)
				{
					putchar(ifirst);
					putchar(i);
					putchar(' ');
					putchar(jfirst);
					putchar(j);
					if (ifirst != 57 || jfirst != 57 || i != 56 || j != 57)
					{
						putchar(',');
						putchar(' ');
					}
					}
				j = 48;
			}
		}
	}
	putchar('\n');
	return (0);
}
