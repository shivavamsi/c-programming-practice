#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int diagonalDifference(int a_size_rows, int a_size_cols, int** pa) {
    int primaryDiagonal = 0, secondaryDiagonal = 0, r = 0;
    for(int i = 0; i < a_size_rows; i++){
        for(int j = 0; j < a_size_cols; j++){
            printf("%i\t", (*pa)[j]);
        }
        printf("\n");
    }
    //int r = abs(primaryDiagonal - secondaryDiagonal);
    return r;

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

    // int result = diagonalDifference(n, n, (int **)a);
    //printf("%d\n", result);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%i\t", (*a)[j]);
        }
        printf("\n");
    }
    return 0;
}



//
//
// void ptr_to_array_ver(int (*arr)[COLS])
// {
//     int i, j;
//     for (i = 0; i < ROWS; i++)
//     {
//         for (j = 0; j < COLS; j++)
//         {
//             printf("%d\t", (*arr)[j]);
//         }
//         arr++;
//         printf("\n");
//     }
// }
