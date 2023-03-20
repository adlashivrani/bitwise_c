#include<stdio.h>
int main () {
        unsigned int  ch1;
        unsigned int  ch2;
        unsigned int  res;
        printf("Enter first value:");
        scanf("%d", &ch1);
        printf("Enter second value:");
        scanf("%d", &ch2);
        res = ch1 ^ ch2;
        printf("%d", res);
        return 0;
}
