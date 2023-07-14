#include <stdio.h>

/**
 * main - Entry
 *
 * Description: this is a function
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	printf("size if a char: %lu byte(s)\n", sizeof(char));
	printf("size if an int: %lu byte(s)\n", sizeof(int));
	printf("size if a long int: %lu byte(s)\n", sizeof(long int));
	printf("size if a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("size if a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
