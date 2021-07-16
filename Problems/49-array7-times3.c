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
#49 Write a C program to read and print the elements of an array of length 7, before print,
    put the triple of the previous position starting from the second position of the array.
    For example, if the first number is 2, the array numbers must be 2, 6, 18, 54 and 162

Test Data:
Input the first number of the array: 5
Expected Output:
n[0] = 5
n[1] = 15
n[2] = 45
n[3] = 135
n[4] = 405

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

    int intArray[7];
    int num;

    printf("Input the first number of the array: \n");
    scanf("%d", &intArray[0]);

    for(int i = 0; i < 7; i++){
        intArray[i + 1] = intArray[i] * 3;
        printf("n[%d] = %d\n", i, intArray[i]);
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