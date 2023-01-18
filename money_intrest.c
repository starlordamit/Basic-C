#include <math.h>
int main() {
float p,r,t,si,a,ci;
scanf("%f %f %f",&p,&r,&t);
si=(p*r*t)/100;
a=p*pow(1+(r/100.0),t);
ci=a-p;
printf("%.2f %.2f",si,ci);
}
