#include <math.h>
#include <stdio.h>
int main() {
float a,b,c,d,e;
float avg;
scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
avg=(a+b+c+d+e)/5;
if(a>100.0||a<0.0||b>100.0||b<0.0||c>100.0||c<0.0||d>100.0||d<0.0||e>100.0||e<0.0){
printf("Invalid Score");
}
else{
avg=(a+b+c+d+e)/5;
if(avg<=100.0 && avg>=90.0){
printf("A");
}
else if(avg<90.0 && avg>=80.0)
printf("B");
else if(avg<80.0 && avg>=60.0)
printf("C");
else if(avg<60.0)
printf("D");
}return 0;
}
