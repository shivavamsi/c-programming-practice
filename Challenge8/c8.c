#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void miniMaxSum(int arr_size, long int* arr) {
    long int min = arr[0];
    long int max = arr[0];
    long long int minSum = 0;
    long long int maxSum = 0;
    for(int i = 0; i < arr_size; i++){
        if(arr[i] < min){ min = arr[i];}
        if(arr[i] > max){ max = arr[i];}
    }
    for(int i = 0; i < arr_size; i++){
        minSum += (long long)arr[i];
        maxSum += (long long)arr[i];
    }
    minSum = minSum - (long long)max;
    maxSum = maxSum - (long long)min;
    printf("%lld %lld", minSum, maxSum);
}

int main() {
    long int *arr = malloc(sizeof(long int) * 5);
    for (int arr_i = 0; arr_i < 5; arr_i++) {
       scanf("%ld",&arr[arr_i]);
    }
    miniMaxSum(5, arr);
    return 0;
}
