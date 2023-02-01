#include<stdio.h>
int main()  
{
    int n,sum=0,i;   
    scanf("%d",&n);
    for(i=1;i<n;i++)  
     {  
      if(n%i==0)  
     {  
      sum = sum + i;  
      }  
      }  
   if(sum==n)  
   printf("Yes");  
   else  
   printf("No");   
    return 0;
}  
