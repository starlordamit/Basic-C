#include <stdio.h>
int main() {
float celsius, fahrenheit;
scanf("%f",&fahrenheit);
celsius = (fahrenheit - 32.00 ) * 5/9 ;
printf("%.2f",celsius);
return 0;
}
