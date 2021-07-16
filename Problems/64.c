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
#64 Write a C program that accepts integers from the user until a zero or a negative number,
    display the number of positive values, the minimum value, the maximum value and the average of all numbers.

Input next positive integer: 15
Input next positive integer: 25
Input next positive integer: 37
Input next positive integer: 43
Number of positive values entered is 4
Maximum value entered is 43
Minimum value entered is 15
Average value is 30.0000

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

    int* numArray = malloc(sizeof(int));
    int i = 0, highest = 0, lowest = 1;
    float average = 0.0;
    bool check = false;

    printf("Input positive integers. \nProgram will end and results displayed when number entered is negative or zero: \n");
    while(check == false){
        printf("Input positive integer: ");
        scanf("%d", &numArray[i]);
        if(numArray[i] > 0){
            i++;
            numArray = realloc(numArray, ((i + 1) * sizeof(int)));
            continue;
        }
        else{
            break;
        }
    }

    for(int j = 0; j < i; j++){
        if(numArray[j] > highest){
            highest = numArray[j];
        }
    }

    for(int j = 0; j < i; j++){
        if(numArray[j] < numArray[j + 1]){
            lowest = numArray[j];
        }
    }

    for(int j = 0; j < i; j++){
        average += numArray[j];
    }

    average = average / i;

    printf("The number of positive integers is %d\n", i);
    printf("Maximum value entered is %d\n", highest);
    printf("Minimum value entered is %d\n", lowest);
    printf("Average value is %.4f\n", (float)average);

    free(numArray);

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