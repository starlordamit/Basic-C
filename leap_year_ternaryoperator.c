#include <math.h>
#include <stdio.h>
int main() {
int year;
printf("Enter a year you want to check: ");
scanf("%d",&year);
((year%4==0) && ((year%400==0) || (year%100!=0))?printf("leap year"):printf("not a leap year"));
return 0;
}
