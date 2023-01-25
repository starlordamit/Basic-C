#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int x,y;
    scanf("%d",&y);
    for(x=1;x<y+1;x++){
    int n,i,m=0,flag=0;
    scanf("%d",&n);    
    m=n/2;    
    for(i=2;i<=m;i++)    
    {    
    if(n%i==0)    
    {    
    printf("no\n");    
    flag=1;    
    break;    
    }    
    }    
    if(flag==0)    
    printf("yes\n");     
     
    }return 0; }
