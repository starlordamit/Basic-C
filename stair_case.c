#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*Sample Input 0

3

Sample Output 0

  *
 **
***

*/

int main() {
    int a,x,y,z;
    scanf("%d",&a);
    for(x=1;x<=a;x++){
        for(y=a-x;y>0;y--){
            printf(" ");
        }
        for(z=1;z<=x;z++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
