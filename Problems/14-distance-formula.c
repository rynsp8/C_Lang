#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <unistd.h>
#include <time.h>
#include "myheader.h"

int main(int argc, char* argv[]){

/*
#14 Write a C program to calculate the distance between two points.

Test Data :
Input x1: 25
Input y1: 15
Input x2: 35
Input y2: 10
Expected Output:
Distance between the said points: 11.1803

formula to use
d=√((x_2-x_1)²+(y_2-y_1)²)

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

    float x1, x2, y1, y2, d, d2;

    printf("Input x1: \n");
    scanf("%f", &x1);
    printf("Input x2: \n");
    scanf("%f", &x2);
    printf("Input y1: \n");
    scanf("%f", &y1);
    printf("Input y2: \n");
    scanf("%f", &y2);

    d = ((x2 - x1) * (x2 - x1)) + ((y2-y1) * (y2 - y1));

    printf("Distance between the said points: %.4f\n", sqrt(d));

/*********************************************************************************************************/
    clock_t end = clock();
    time_t wallEnd = time(NULL);
    //printf("CPU ticks: %ld\n", end);
    //printf("Epoch ticks: %ld\n", wallEnd);
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("CPU time used = %f ms\n", time_spent);
    printf("Wall time used = %ld seconds\n", (wallEnd - wallBegin));
}