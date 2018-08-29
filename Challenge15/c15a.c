#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char* bigSorting(int arr_size, char** arr) {
    // Complete this function
    char** temp;
    char** result;

}

int main() {
    int n;
    scanf("%i", &n);
    char* *arr = malloc(sizeof(char*) * n);
    for (int arr_i = 0; arr_i < n; arr_i++) {
       arr[arr_i] = (char *)malloc(10240 * sizeof(char));
       scanf("%s",arr[arr_i]);
    }
    char* result = bigSorting(n, arr);
    for(int result_i = 0; result_i < n; result_i++) {
        printf("%s\n", result[result_i]);
    }
    return 0;
}
