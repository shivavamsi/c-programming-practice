#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long long getWays(long n, int c_size, long int* c){
    current = 
}

int main() {
    int n;
    int m;
    long swap;
    scanf("%d %d", &n, &m);
    long *c = malloc(sizeof(long) * m);
    for(int c_i = 0; c_i < m; c_i++){
       scanf("%ld",&c[c_i]);
    }
    //sorting
    for(int k = 0; k < c_size; k++){
        for(int l = 0; l < c_size - 1; l++){
            if(c[l] > c[l+1]){
              swap = c[l];
              c[l] = c[l+1];
              c[l+1] = swap;
            }
        }
    }
    // Print the number of ways of making change for 'n' units using coins having the values given by 'c'
    long long ways = getWays(n, m, c);
    printf("%lld",ways);
    return 0;
}
