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
	int i = 48, j = 49, l = 50, n = 0, x = 0, z = 0;

	p:
	while (i < 56)
	{

		while (j < 58)
		{
			while (l < 58)
			{
				putchar(i);
				putchar(j);
				putchar(l);
				if (i != 55)
				{
					putchar(',');
					putchar(' ');
				}
				l++;
			}
			x++;
			l = 50 + x;
			j++;
		}
		n++;
		z++;
		j = 49 + n;
	}
	i++;
	goto p;
	putchar('\n');
	return (0);
}
