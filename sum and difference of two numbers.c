#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
int a,b;
float c,d;
scanf("%d%d",&a,&b);
scanf("%f%f",&c,&d);
printf("%d %d\n",a+b,abs(a-b));
printf("%0.1f %0.1f",c+d,fabs(c-d));
return 0;
}
