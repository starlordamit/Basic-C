#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,r,sum=1;
    scanf("%d",&a);
    
    while(a>0){
        r=a%10;
        a=a/10;
        sum=sum*r;
    }
    printf("%d",sum);
    return 0;
}
