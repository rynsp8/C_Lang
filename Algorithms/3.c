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
    #3. Write a C program to check two given integers, and return true if one of them is 30 or if their sum is 30

    Expected Output:
    1
    1
    0
    */

    clock_t begin = clock();       // returns number of clock ticks
    time_t wallBegin = time(NULL); // Epoch is time since 00:00:00 UTC, January 1, 1970;
    // printf("CPU ticks: %ld\n", begin);
    // printf("Epoch ticks: %ld\n", wallBegin);
    /*********************************************************************************************************/

    signed int a, b;

    printf("Please enter an integer: \n");
    scanf("%d", &a);

    printf("Please enter an integer: \n");
    scanf("%d", &b);

    if (a == 30 || b == 30 || (a + b) == 30)
    {
        printf("At least one number is 30 or their sum is 30.");
        return true;
    }
    else
    {
        printf("whomp whomp!");
        return false;
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
