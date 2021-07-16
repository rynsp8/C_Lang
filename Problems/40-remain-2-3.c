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
#40 Write a C program to find all numbers which are dividing by 7 and the remainder is equal to 2 or 3 between two given integer numbers.

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
        if(i % 7 == 2 || i % 7 == 3){
            printf("%d\n", i);
        }
    }


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