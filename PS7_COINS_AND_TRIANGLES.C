#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
   int N;
    scanf("%d", &N);
    int height = floor((-1 + sqrt(8*N + 1))/2);
    printf("%d\n", height);
    return 0;
}
