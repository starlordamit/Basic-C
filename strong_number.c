#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
 {
      int n,num,sum;
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        num=i;sum=0;
      while(num>0)
      {
         sum=sum+fact(num%10);
          num/=10;
      }
        if(sum==i)
            printf("%d ",i);
    }
    return 0;
}
int fact(int i)
{
    int f=1;
    for(int j=i;j>=1;j--)
        f=f*j;
    return f;
        
}
