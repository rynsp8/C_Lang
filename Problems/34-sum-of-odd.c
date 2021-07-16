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
#34 Write a C program to print the numbers from the lowest to the highest (inclusive) and the sum of consecutive integers from a given pair of numbers.

Test Data :
Input a pair of numbers (for example 10,2):
Input first number of the pair: 10
Input second number of the pair: 2
Expected Output:
List of odd numbers: 3
5
7
9
Sum=24

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

   int highest, lowest, temp, sum = 0;

    printf("Input a pair of integers. For example 10 and 2: \n");
    scanf("%d", &highest);
    scanf("%d", &lowest);

    if(highest < lowest){
        temp = highest;
        highest = lowest;
        lowest = temp;
    }

    printf("List of odd numbers: \n");

    for(int i = lowest; i < highest; i++){
        if(i % 2 != 0){
            printf("%d\n", i);
            sum += i;
        }
    }

    printf("Sum = %d", sum);

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