#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
      for (int i = -1 * n + 1; i <= n - 1; i++) {
        int count = n - (abs(i) + 1);
        int cc = 0;
        int t = n;
        for (int j = -1 * n + 1; j <= n - 1; j++) {
            printf("%d ", t);
            if (count != cc) {
                t --;
                cc++;
            } else if (t < n && j >= n - 1 - cc) {
                t++;
            }
        }
        printf("\n");
      }
    return 0;
}
