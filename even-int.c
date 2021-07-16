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
#31 Write a C program to check whether a given integer is positive even, negative even, positive odd or negative odd.
    Print even if the number is 0.

Test Data :
Input an integer: 13
Expected Output:
Positive Odd

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

   int n;

    printf("Input an integer: \n");
    scanf("%d", &n);

    if(n > 0.0 && n % 2 != 0){
        printf("Positive Odd\n");
    }
    else if(n > 0.0 && n % 2 == 0){
        printf("Positive Even\n");
    }
    else if(n < 0.0 && n % 2 != 0){
        printf("Negative Odd\n");
    }
    else if(n < 0.0 && n % 2 == 0){
        printf("Negative Even\n");
    }

    return 0;

/*********************************************************************************************************/
    clock_t end = clock();
    time_t wallEnd = time(NULL);
    //printf("CPU ticks: %ld\n", end);
    //printf("Epoch ticks: %ld\n", wallEnd);
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("\nCPU time used = %f ms\n", time_spent);
    printf("Wall time used = %ld seconds\n", (wallEnd - wallBegin));
}