#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
#include "myheader.h"

int main(int argc, char *argv[])
{

    /*
    #1. Write a C program to compute the sum of the two given integer values. If the two values are the same,
        then return triple their sum1.

    Expected Output:
    3
    12
    */

    clock_t begin = clock();       // returns number of clock ticks
    time_t wallBegin = time(NULL); // Epoch is time since 00:00:00 UTC, January 1, 1970;
    // printf("CPU ticks: %ld\n", begin);
    // printf("Epoch ticks: %ld\n", wallBegin);
    /*********************************************************************************************************/

    signed int a, b;

    printf("Please enter an integer: \n");
    scanf("%d", &a);
    printf("Please enter a second integer: \n");
    scanf("%d", &b);

    // printf("First integer: %d\nSecond integer: %d\n", a, b);

    if (a == b)
    {
        printf("Triple Sum: %d\n", (3 * (a + b)));
    }
    else
    {
        printf("Sum: %d\n", (a + b));
    };

    /*********************************************************************************************************/
    clock_t end = clock();
    time_t wallEnd = time(NULL);
    // printf("CPU ticks: %ld\n", end);
    // printf("Epoch ticks: %ld\n", wallEnd);
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("\nCPU time used = %f ms\n", time_spent);
    printf("Wall time used = %ld seconds\n", (wallEnd - wallBegin));

    return 0;
}
