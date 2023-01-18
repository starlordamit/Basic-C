#include <math.h>
#include <stdio.h>
int main()
{
int d,m,y;
scanf("%d%d%d",&d,&m,&y);
if(d>31||m>12||y<=1||m<1||d<1||(!(y%4==0&&y%100!=0||y%400==0)&&m==2&&d>28))
{
printf("Incorrect Date");
return 0;
} if(m>2)
m=m;
else
{
m=m+12;
y--;
} int j=y%100;
int k=y/100;
int h=d+floor((13*(m+1))/5)+j+floor(j/4)+floor(k/4)+5*k;
h=h%7;
switch(h)
{
case 0:
printf("Saturday");
break;
case 1:
printf("Sunday");
break;
case 2:
printf("Monday");
break;
case 3:
printf("Tuesday");
break;
case 4:
printf("Wednesday");
break;
case 5:
printf("Thursday");
break;
case 6:
printf("Friday");
break;
case 7:
printf("saturday");
break;
default:
printf("Incorrect Date");
} 
return 0;
}
