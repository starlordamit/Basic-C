#include <stdio.h>
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }

    return -1;
}
int main(){
    int a[]={23,4,234,23,4,2,5,346,45,6,56,7,68,568,67,9,78,90,768,56,745,6,3};
    int len = sizeof(a)/sizeof(a[0]);
    int b[len];
    int one;
    //sorting
    for(int i=0;i<len;i++){
        for(int j=0;j<len-i;j++){
            if(a[j]>a[j+1]){
                one=a[j];
                a[j]=a[j+1];
                a[j+1]=one;}
        }
    }
    printf("Enter number you want to search: ");
    int item;
    scanf("%d",&item);
    int positionofitem = binarySearch(a,0,len,item);
    (positionofitem==-1)?printf("Not Found"):printf("found at %d",positionofitem);
    //binary search

return 0;
}
