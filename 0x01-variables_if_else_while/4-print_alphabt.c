#include <stdio.h>

/**
 * main -Entry
 *
 * Description: prints all alphabet except e and q
 *
 * Return: Always 0 (if success)
*/

int main(void)
{
	char n = 96;

	while (n++ < 122)
	{
		if (n != 101 && n != 113)
			putchar(n);
		else
			continue;
	}
	putchar('\n');
	return (0);
}
