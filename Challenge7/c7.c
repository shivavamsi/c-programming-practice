#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void staircase(int n) {
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if (j <= n-i-2){
                printf(" ");
            }
            else{
                printf("#");
            }
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%i", &n);
    staircase(n);
    return 0;
}
