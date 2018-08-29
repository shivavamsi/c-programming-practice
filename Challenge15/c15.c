#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long long* bigSorting(int arr_size, char** arr) {
    // Complete this function
    long long swap;
    long long* resultNum = malloc(sizeof(long long) * arr_size);

    for(int k = 0; k < arr_size; k++){
          resultNum[k] = atoll(arr[k]);
    }

    for(int i = 0; i < arr_size; i++){
        for(int j = 0; j < arr_size; j++){
                if(resultNum[j] > resultNum[j+1]){
                      swap = resultNum[j];
                      resultNum[j] = resultNum[j+1];
                      resultNum[j+1] = swap;
                }
            }
        }
    return resultNum;
}

int main() {
    int n;
    scanf("%i", &n);
    char* *arr = malloc(sizeof(char*) * n);
    for (int arr_i = 0; arr_i < n; arr_i++) {
       arr[arr_i] = (char *)malloc(10240 * sizeof(char));
       scanf("%s",arr[arr_i]);
    }
    long long* result = bigSorting(n, arr);
    for(int result_i = 0; result_i < n; result_i++) {
        printf("%lld\n", result[result_i]);
    }
    return 0;
}
