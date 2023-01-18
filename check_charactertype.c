#include <stdio.h>
#include <string.h>
int main() {
char ch; scanf("%c",&ch);
if (ch >=65 && ch<=90)
printf("Uppercase");
else if(ch>=97 && ch<=122)
printf("Lowercase");
else if(ch >=48 && ch<=57)
printf("Number");
else
printf("SpecialCharacter");
return 0;
}
