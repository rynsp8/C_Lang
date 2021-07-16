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
#58 Write a C program that accepts 4 real numbers from the keyboard and print out the difference of
    the maximum and minimum values of these four numbers.

Input four numbers: 1.54 1.236 1.3625 1.002
Difference is 0.5380

1.54 - 1.002 = 0.5380

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

    float fArray[4], largest = 0.0, smallest = 0.0;

    printf("Input four numbers: ");
    for(int i = 0; i < 4; i++){
        scanf("%f", &fArray[i]);
    }

    for(int i = 0; i < 4; i++){
        if(fArray[i] > largest){
            largest = fArray[i];
        }
    }

    for(int i = 0; i < 4; i++){
        if(fArray[i] < fArray[i + 1]){
            smallest = fArray[i];
        }
    }

    printf("The difference between the largest and smallest is %.4f\n", (largest - smallest));


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