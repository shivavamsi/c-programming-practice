#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long long int aVeryBigSum(int n, int ar_size, long int* ar) {
    long long int r = 0;
    for(int i = 0; i < n; i++){
       r += (long long)ar[i];
    }
    return r;
}

int main() {
    int n;
    scanf("%i", &n);
    long int *ar = malloc(sizeof(long int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%li",&ar[ar_i]);
    }
    long long int result = aVeryBigSum(n, n, ar);
    printf("%lld\n", result);
    return 0;
}
