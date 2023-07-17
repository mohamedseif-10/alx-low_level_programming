#include <stdio.h>

/**
 * main - Entry
 *
 * Description: this function prints all alphabet
 *
 * Return: 0 if (success)
*/

int main(void)
{
	int i = 123;

	while (i >= 97)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
