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
#39 Write a C program to calculate the sum of all numbers NOT divisible by 17 between two given integer numbers.

Test Data :
Input the first integer: 50 Input the second integer: 99
Expected Output:
Sum: 3521

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

    int lowest, highest, temp;
    unsigned double sum = 0;

    printf("Input the first integer: \n");
    scanf("%d", &lowest);
    printf("Input the second integer: \n");
    scanf("%d", &highest);

    if(highest < lowest){
        temp = highest;
        highest = lowest;
        lowest = temp;
    }

    for(int i = lowest; i <= highest; i++){
        if(i % 17 != 0){
            sum += i;
        }
    }

    printf("Sum: %f", sum);

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