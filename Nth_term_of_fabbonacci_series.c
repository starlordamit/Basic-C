#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a=0,b=1,num,c,i=3;
    scanf("%d",&num);
    if(num==1)
        printf("0");
    else if(num==2)
        printf("1");
    else{
        while(i<=num){
            c=a+b;
            a=b;
            b=c;
            i=i+1;
        }
        printf("%d",c);
    }
    return 0;
}
