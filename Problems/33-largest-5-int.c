#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
#include "myheader.h"
#define MAX 5

int main(int argc, char* argv[]){

/*
#33 Write a C program that accepts some integers from the user and find the highest value and the input position.

Test Data :
Input 5 integers:
5
7
15
23
45
Expected Output:
Highest value: 45
Position: 5

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

   int intArray[MAX], highest = 0, position = 0;

    printf("Input 5 integers: \n");
    for(int i = 0; i < MAX; i++){
        scanf(" %d", &intArray[i]);
    }

    for(int i = 0; i < 5; i++){
        if(intArray[i] > highest){
            highest = intArray[i];
            position = i + 1;
        }
        else{
            continue;
        }
    }

    printf("Highest Value: %d\n", highest);
    printf("Position: %d\n", position);

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