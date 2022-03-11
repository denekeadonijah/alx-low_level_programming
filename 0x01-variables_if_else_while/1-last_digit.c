#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	int Length;
	char strings[] = "Last digit of";

	srand(time(0));
	num = rand() - RAND_MAX / 2;
	Length = num % 10;

	if (Length > 5)
	printf("%s %d is %d and is greater than 5\n", strings, num, Length);
	else if (Length == 0)
	printf("%s %d is %d and is 0\n", strings, num, Length);
	else if (Length < 6)
	printf("%s %d is %d and is less than 6 and not 0\n", strings, num, Length);

	return (0);
}

