#include <stdio.h>
int main(){
int n, rev = 0, rem, ori;
scanf("%d", &n);
ori = n;
while (n != 0) {
rem = n % 10;
rev = rev * 10 + rem;
n /= 10;}
if (ori == rev)
printf("Yes");
else
printf("No");
return 0;
}
