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
		n = j ;
		while (n < 59)
		{
			putchar(i);
			putchar(j);
			if (n != 58)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
			n++;
		}
		i++;
		j++;
	}
	putchar('\n');
	return (0);
}
