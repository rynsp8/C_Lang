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
#17 Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.

Test Data :
Input seconds: 25300
Expected Output:
There are:
H:M:S - 7:1:40

60 seconds a minute
3600 seconds an hour

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

    int seconds, hours, minutes;

    printf("Input seconds: \n");
    scanf("%d", &seconds);

    hours = seconds/3600;
    minutes = (seconds - (hours * 3600))/60;
    seconds = seconds - (hours * 3600) - (minutes * 60);

    printf("There are:\nH:M:S - %d:%d:%d", hours, minutes, seconds);



/*********************************************************************************************************/
    clock_t end = clock();
    time_t wallEnd = time(NULL);
    //printf("CPU ticks: %ld\n", end);
    //printf("Epoch ticks: %ld\n", wallEnd);
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("\nCPU time used = %f ms\n", time_spent);
    printf("Wall time used = %ld seconds\n", (wallEnd - wallBegin));
}