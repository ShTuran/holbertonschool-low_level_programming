#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;


	if (n<0)
{
	printf("is negative");	

}

	else if (n==0)
{
	printf("is zero");
}

	else
{
	printf("is positive");
}
	return (0);
}