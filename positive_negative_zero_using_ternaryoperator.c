// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a;
    printf("enter a number to check positive and negative:");
    scanf("%d",&a);
    (a<0)?printf("Negative"):((a==0?printf("zero"):printf("Positive")));

    return 0;
}
