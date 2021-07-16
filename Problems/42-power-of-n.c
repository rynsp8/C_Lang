#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
#include "myheader.h"

int main(int argc, char* argv[]){

/*
#42 Write a C program to print a number, it’s square and cube in a line, starting from 1 and print n lines.
    Accept number of lines (n, integer) from the user.

Test Data :
Input number of lines: 5
Expected Output:
1 1 1
2 4 8
3 9 27
4 16 64
5 25 125

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

    int n;

    printf("Input number of lines: \n");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        printf("%d\t%.f\t%.f\n", i, pow(i, 2), pow(i, 3));
    }


/*********************************************************************************************************/
    clock_t end = clock();
    time_t wallEnd = time(NULL);
    //printf("CPU ticks: %ld\n", end);
    //printf("Epoch ticks: %ld\n", wallEnd);
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("\nCPU time used = %f ms\n", time_spent);
    printf("Wall time used = %ld seconds\n", (wallEnd - wallBegin));

    return 0;
}