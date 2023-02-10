#include <stdio.h>
int main(){
    int a[]={34,5,56,456,4,567,67,68,678,677,89,5,345,2,3423,24},item;
    printf("Enter the value you want to search : ");
    scanf("%d",&item);
    int len = sizeof(a)/sizeof(a[0]);
    for(int i=0;i<len;i++){
        if(a[i]==item){
            printf("%d is found on %d position",item,i+1);
            goto exit;}
        else continue;
    }

    printf("Not Found");
    exit:
return 0;
    }
