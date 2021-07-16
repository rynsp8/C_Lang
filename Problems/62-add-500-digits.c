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
#62 Write a C program that accepts a positive integer less than 500 and prints out the sum of the digits of this number.

Input a positive number less than 500:
Sum of the digits of 347 is 14

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

    int x, y = 0;

    printf("Input a positive number less than or equal to 500: ");
    scanf("%d", &x);

    if(x < 10){
        printf("Sum of digit is %d\n", x);
    }

    if(x > 9 && x < 100){
        for(int i = 0; i < 2; i++){
            y += x % 10;
            x = x / 10;
        }
        printf("Sum of digit is %d\n", y);
    }

    if(x >= 100){
        for(int i = 0; i < 3; i++){
            y += x % 10;
            x = x / 10;
        }
        printf("Sum of digit is %d\n", y);
    }

    //y = x % 10;
    //x -= x % 10;

    //printf("y = %d ", y);
    //printf("x = %d ", x);

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