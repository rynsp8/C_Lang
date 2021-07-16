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
#55 Write a C program that swaps two numbers without using third variable.

Input value for x & y:
Before swapping the value of x & y: 5 7
After swapping the value of x & y: 7 5

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

    int x, y, temp;


    printf("Input value for x: \n");
    scanf("%d", &x);
    printf("Input value for y: \n");
    scanf("%d", &y);

    printf("Before swapping the value of x & y: %d %d\n", x, y);

    temp = x;
    x = y;
    y = temp;

    printf("After swapping the value of x & y: %d %d\n", x, y);

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