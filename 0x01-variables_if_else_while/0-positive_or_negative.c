#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * prints the value of n maybe either zero, positive or negative
 *
 * 
 * Return: Always returns 0
*/

int main(void)
{
	int n;
	/*produces a random number and stores it in n*/
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*this prints either positive, negative or zero*/
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);

	return (0);
}
