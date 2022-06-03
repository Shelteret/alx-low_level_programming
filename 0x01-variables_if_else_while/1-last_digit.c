#include <stdlib.h>
#include <time.h>
/**
 * main - Determines if a string is greater than 5
 *
 * Return: 0 if Success
*/
int main(void)
{
	int n, k;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	k = n % 10;

	if (k > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, k);
	}
	else if (k < 6 && k != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, k);
	}
	else if (k == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, k);
	}
	return (0);
}
