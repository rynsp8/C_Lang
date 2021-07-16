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
#50 Write a C program to read an array of length 5 and print the position and value of the
    array elements of value less than 5.

Test Data:
Input the 5 members of the array:
15
25
4
35
40
Expected Output:
A[2] = 4.0

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

    int intArray[5];

    printf("Input the 5 numbers of the array: \n");
    for(int i = 0; i < 5; i++){
        scanf("%d", &intArray[i]);
    }

    for(int i = 0; i < 5; i++){
        if(intArray[i] < 5){
            printf("intArray[%d] = %d", i, intArray[i]);
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