#include<stdio.h>
#include<stdlib.h>

int power(int,int);

int main()
{
	int a;
	int b;
	printf("Enter a number\n");
	scanf("%d", &a);
	printf("Enter upto what power we want\n");
	scanf("%d", &b);
	int res = power(a,b);
	printf("\na power b: %d\n", res);
	return 0;
}

int power(int a, int b)
{
	int ans = 1;
	 while ( b > 0) {
                if ( b & 1) {
                   ans = ans*a;
                }
			a = a * a;
            b = b>>1;
        }
	return ans;
}
