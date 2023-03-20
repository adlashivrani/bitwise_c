#include<stdio.h>
#include<stdlib.h>

int poweroffour(unsigned int);

int main()
{
	int n;
	printf("\nEnter a Number\n");
	scanf("%d", &n);
	int res = poweroffour(n);
	if (res > 0) {
		printf("\nIts power of four\n");
	} else {
		printf("\nNot power of four\n");
	return 0;
	}
}

int poweroffour(unsigned int n)
{
	return (n != 0) && (!(n & (n-1)) && !(n & 0xAA));
}
