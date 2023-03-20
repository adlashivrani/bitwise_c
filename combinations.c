#include<stdio.h>
#if 0
int main () {
        unsigned int  ch1;
        unsigned int  ch2;
        unsigned int  res;
        printf("Enter First value:");
        scanf("%d", &ch1);
        printf("Enter second value:");
        scanf("%d", &ch2);
        res = (ch1 | ch2) | ( ch1 ^ ch2);
        printf("Result: %d", res);
        return 0;
}
#endif
#if 0
#include<stdio.h>
int main () {
        unsigned int  ch1;
        unsigned int  ch2;
        unsigned int  res;
        printf("Enter value:");
        scanf("%d", &ch1);
        printf("Enter second value:");
        scanf("%d", &ch2);
        res = (ch1 & ch2) ^ ( ch1 | ch2);
        printf("Result: %d", res);
        return 0;
}
#endif
#if 1
#include<stdio.h>
int main () {
        unsigned int  ch1;
        unsigned int  ch2;
        unsigned int  res;
        printf("Enter value:");
        scanf("%d", &ch1);
        printf("enter how many bits to shift");
        scanf("%d", &ch2);
        res = (ch1 << ch2) | ( ch1 >> ch2);
        printf("%d", res);
        return 0;
}
#endif
