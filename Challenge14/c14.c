#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long long getWays(long n, int c_size, long int* c){
    // Complete this function
    long long solutionTable[n+1][c_size];

    for (int i = 0; i <= n; i++){
        if(i%c[0] == 0){
            solutionTable[i][0] = 1;
        }
        else solutionTable[i][0] = 0;
    }

    for (int j = 0; j < c_size; j++){
            solutionTable[0][j] = 1;
    }

    //updating solutionTable
    for(int j = 1; j < c_size; j++){
        for(int i = 1; i <= n; i++){
            if (c[j] > (long long)i){
                if(i%c[j] == 0){
                    solutionTable[i][j] = solutionTable[i][j-1];
                }
                else solutionTable[i][j] = 0;
            }
            else{
                solutionTable[i][j] = solutionTable[i][j-1] + solutionTable[i-j-1][j];
            }
        }
    }
    for(int j = 0; j < c_size; j++){
        for(int i = 0; i <= n; i++){
            printf("%lld\t", solutionTable[i][j]);
        }
        printf("\n");
    }
    return solutionTable[n][c_size-1];
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
