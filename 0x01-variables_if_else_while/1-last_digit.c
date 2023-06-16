#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point.
 * Description: Gets back last digit of the variable.
 ** Return: Always 0 (success)
 */

int main(void)
{
	int n, z;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */

	z = n % 10;
	printf(" %d \n", z);

	if (n > 5)
	{
		printf("Last digit of" % d "is" % d "and is greater than 5 \n", n, z);
	}
	else if (n == 0)
	{
		printf(" Last digit of" % d "is" % d "and is 0 \n", n, z);
	}
	else
	{
		printf("Last digit of" % d "is" % d "and is less than 6 and not 0 \n", n, z);

	return (0);
}
