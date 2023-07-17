#include <stdio.h>

/**
 * main - Entry
 *
 * Description: print digits from zero to 9
 *
 * Return: Always 0 (if succcess)
*/

int main(void)
{
	int i = 48, j = 49, n;

	while (i < 58)
	{
		while (n < 59)
		{
			n = j;
			putchar(i);
			putchar(j);
			if (n != 58)
			{
				putchar(',');
				putchar(' ');
			}
			n++;
		}
		i++;
		j++;
	}
	putchar('\n');
	return (0);
}
