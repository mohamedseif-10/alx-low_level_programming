#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - ENtry
 *
 * Description: Function tell you if the inserted number is positive or not
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("is positive");
	else if (n < 0)
		printf("is negative");
	else
		printf("is zero");
	return (0);
}
