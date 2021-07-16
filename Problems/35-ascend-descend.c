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
#35 Write a C program to check whether two numbers in a pair is in ascending order or descending order.

Test Data :
Input a pair of numbers (for example 10,2 : 2,10):
Input first number of the pair: 10
Expected Output:
Input second number of the pair: 2
The pair is in descending order!

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

   int num1, num2;

    printf("Input a pair of integers \n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    if(num1 > num2){
        printf("The pair is in descending order!");
    }
    else{
        printf("The pair is in ascending order!");
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