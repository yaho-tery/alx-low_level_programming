#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - entry point
*
*  Return: Aways 0 (success)
*/
int main(void)
{
	int n, lDigit;
	char str[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lDigit = n % 10;

	if (lDigit > 5)
		printf("%s %d is %d and is greater than 5\n", str, n, lDigit);
	else if (lDigit == 0)
		printf("%s %d is %d and is 0\n", str, n, lDigit);
	else if (lDigit < 6)
		printf("%s %d is %d and is less than 6 and not 0\n", str, n, lDigit);
	return (0);

}
