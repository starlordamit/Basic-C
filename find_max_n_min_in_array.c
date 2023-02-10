#include <stdio.h>
int main(){
    int a[]= {4,5,534,566,345,3,543,5,23,56,568,67};
    int max=a[0];
    int min= max;
    int len = sizeof(a)/sizeof(a[0]);
    for (int i=0;i<len;i++){
        printf(" %d",a[i]);
    }
    printf("\n");
    for(int i=1;i<len;i++){
            if(min>a[i]){
            min=a[i];}
            else if(max<a[i]){
                max=a[i];
            }

    }
    printf("Minimum value in Array is : %d",min);
    printf("\nMaximum value in Array is : %d",max);
}
