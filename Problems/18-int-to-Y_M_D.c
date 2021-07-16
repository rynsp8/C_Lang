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
#18 Write a C program to convert a given integer (in days) to years, months and days,
    assumes that all months have 30 days and all years have 365 days.

Test Data :
Input no. of days: 2535
Expected Output:
6 Year(s)
11 Month(s)
15 Day(s)

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

    int years, months, days;

    printf("Input number of days: \n");
    scanf("%d", &days);

    years = days/365;
    months = (days - (years * 365))/30;
    days = days - (years * 365) - (months * 30);

    printf("%d Year(s)\n%d Month(s)\n%d Day(s)", years, months, days);



/*********************************************************************************************************/
    clock_t end = clock();
    time_t wallEnd = time(NULL);
    //printf("CPU ticks: %ld\n", end);
    //printf("Epoch ticks: %ld\n", wallEnd);
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("\nCPU time used = %f ms\n", time_spent);
    printf("Wall time used = %ld seconds\n", (wallEnd - wallBegin));
}