#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long int stockmax(int prices_size, long int* prices) {
    long int profit = 0, maxS = 0;
    int nShares = 0, indexTempMax = 0;
    for(int i = 0; i < prices_size; i++){
        if(i < indexTempMax) goto BuyShare;
        long int tempMaxS = 0;
        for(int j = i; j < prices_size; j++){
            if(prices[j] > tempMaxS){
              tempMaxS = prices[j];
              indexTempMax = j;
            }
        }

        BuyShare:
        if(tempMaxS > prices[i]){
            nShares++;
            profit -= prices[i];
          }

        if(nShares !=0 && prices[i] >= tempMaxS){
            profit += prices[i]*nShares;
            nShares = 0;
        }
    }
    return profit;
}

int main() {
    int t;
    scanf("%i", &t);
    for(int a0 = 0; a0 < t; a0++){
        int n;
        scanf("%i", &n);
        long int *prices = malloc(sizeof(long int) * n);
        for (int prices_i = 0; prices_i < n; prices_i++) {
           scanf("%li",&prices[prices_i]);
        }
        long int result = stockmax(n, prices);
        printf("%ld\n", result);
    }
    return 0;
}
