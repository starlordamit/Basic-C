#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float a,b,c,ans;
    scanf("%f %f %f",&a,&b,&c);
    ans=(b*b)-(4*a*c);
    if (a==0){
        printf("Invalid Coefficient");
    }
    else if (ans>0)
        printf("Roots are real and distinct");
    else{ if(ans==0)
        printf("Roots are real and equal");
    else
        printf("Roots are imaginary");}
    return 0;
}
