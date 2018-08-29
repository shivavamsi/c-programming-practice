#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int diagonalDifference(int a_size_rows, int a_size_cols, int** a) {
    // Complete this function
    int d1 = 0, d2 = 0;
    for (int a_i = 0; a_i < a_size_rows; a_i++) {
            d1 += a[a_i][a_i];
            d2 += a[a_i][a_size_rows - a_i - 1];
            return abs(d1 - d2);
    }
}

int main() {
    int n;
    scanf("%i", &n);
    int a[n][n];
    for (int a_i = 0; a_i < n; a_i++) {
       for (int a_j = 0; a_j < n; a_j++) {

          scanf("%i",&a[a_i][a_j]);
       }
    }
    int result = diagonalDifference(n, n, a);
    printf("%d\n", result);
    return 0;
}
