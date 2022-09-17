#include <stdio.h>

/**
* main - Entry point
*
*
* Return: Always 0 (success)
*/
int main(void)
{
	int a;
	long long int b;
	long int c;
	char d;
	float f;
	double e;

	printf("size of a long long int: %i byte(s)\n", (int)sizeof(b));
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a double: %1f byte(s)\n", (double)sizeof(e));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a flaot: %lu byte(s)\n", (unsigned long)sizeof(f));
}
