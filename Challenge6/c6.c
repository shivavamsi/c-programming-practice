#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void plusMinus(int arr_size, int* arr) {
    float f_pos, f_neg, f_zer = 0;
    for(int i = 0; i < arr_size; i++){
        if (arr[i] > 0) f_pos++;
        else if (arr[i] < 0) f_neg++;
        else f_zer++;
    }
    printf("%f\n", f_pos/(float)arr_size);
    printf("%f\n", f_neg/(float)arr_size);
    printf("%f\n", f_zer/(float)arr_size);
}

int main() {
    int n;
    scanf("%i", &n);
    int *arr = malloc(sizeof(int) * n);
    for (int arr_i = 0; arr_i < n; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    plusMinus(n, arr);
    return 0;
}
