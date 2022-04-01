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
    #2. Write a C program to get the absolute difference between n and 51.
        If n is greater than 51 return triple the absolute difference.

    Expected Output:
    6
    21
    0
    */

    clock_t begin = clock();       // returns number of clock ticks
    time_t wallBegin = time(NULL); // Epoch is time since 00:00:00 UTC, January 1, 1970;
    // printf("CPU ticks: %ld\n", begin);
    // printf("Epoch ticks: %ld\n", wallBegin);
    /*********************************************************************************************************/

    signed int a = 51, b;

    printf("Please enter an integer: \n");
    scanf("%d", &b);

    if (b > a)
    {
        printf("Triple difference: %d\n", (3 * (b - a)));
    }
    else
    {
        printf("Sum: %d\n", (a - b));
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
