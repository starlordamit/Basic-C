#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b;
    char sym;
    scanf("%d %d",&a,&b);
    scanf("\n%c",&sym);
    switch(sym){
        case('+'):
            printf("%d",abs(a+b));
            break;
        case('-'):
            printf("%d",abs(a-b));
            break;
        case('*'):
            printf("%d",a*b);
            break;
        case('/'):
            printf("%d",a/b);
            break;
        case('%'):
            printf("%d",a%b);
            break;
        default:
            printf("Invalid Choice");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
