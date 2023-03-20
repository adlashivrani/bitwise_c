#include<stdio.h>
int main() 
{
	int ch1;
	int ch2;
	printf("Enter the number: ");
	scanf("%d", &ch1);
	ch2 = ~ch1;//represented in 2's compliment form ~N = ~(~(~N)+1) = -(N+1)
	printf("After bitwise not operation: "); 
	printf("%d", ch2);
	return 0;
}
