#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int minTotalDist(int m, int n, int* mA, int* mB){
    int posR1 = mB[0];
    int posR2 = mB[1];
    int totalDistance;
    int distR1 = abs(mA[0] - mB[0]);
    int distR2 = abs(mA[1] - mB[1]);
    for (int i = 2; i < n; i++) {
        if((i%2 == 0) && (n-i != 1)){
            if((abs(posR1 - mA[i]) + abs(posR2 - mA[i+1])) < (abs(posR2 - mA[i]) + abs(posR1 - mA[i+1]))){
                distR1 += abs(mA[i] - mB[i]) + abs(posR1 - mA[i]);
                distR2 += abs(mA[i+1] - mB[i+1]) + abs(posR2 - mA[i+1]);
                posR1 = mB[i];
                posR2 = mB[i+1];
            }
            else{
                distR1 += abs(mA[i+1] - mB[i+1]) + abs(posR1 - mA[i+1]);
                distR2 += abs(mA[i] - mB[i]) + abs(posR2 - mA[i]);
                posR1 = mB[i+1];
                posR2 = mB[i];
            }
        }
        if ((n-i == 1) && (n%2 != 0)){
            if(abs(posR1 - mA[i]) <= abs(posR2 - mA[i])){
                distR1 += abs(mA[i] - mB[i]) + abs(posR1 - mA[i]);
                posR1 = mB[i];
            }
            else{
                distR2 += abs(mA[i] - mB[i]) + abs(posR2 - mA[i]);
                posR2 = mB[i];
            }
        }
    }

    totalDistance = distR1 + distR2;
    return totalDistance;
}

int main() {
    int t;
    scanf("%i", &t);
    for(int a0 = 0; a0 < t; a0++){
        int m, n;
        scanf("%i %i", &m, &n);
        int *mA = malloc(sizeof(int) * n);
        int *mB = malloc(sizeof(int) * n);
        for (int n_i = 0; n_i < n; n_i++) {
           scanf("%i %i",&mA[n_i], &mB[n_i]);
        }
        int result = minTotalDist(m, n, mA, mB);
        printf("%d\n", result);
    }
    return 0;
}
