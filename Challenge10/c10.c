#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char* timeConversion(char* s) {
    char* r = (char *)malloc(512000 * sizeof(char));;
    int HH = (s[0] - '0')*10 + (s[1] - '0');
    int mm = (s[3] - '0')*10 + (s[4] - '0');
    int ss = (s[6] - '0')*10 + (s[7] - '0');
    if (s[8] == 'P' && HH != 12) HH += 12;
    if (s[8] == 'A' && HH == 12) HH -= 12;
    sprintf(r, "%02d:%02d:%02d", HH, mm, ss);
    return (char *)r;
}

int main() {
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
    int result_size;
    char* result = timeConversion(s);
    printf("%s\n", result);
    return 0;
}
