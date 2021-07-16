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
#25 Write a C program that reads an integer between 1 and 12 and print the month of the year in English.

Test Data :
Input a number between 1 to 12 to get the month name: 8
Expected Output:
August

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

    int num;

    printf("Input a number between 1 and 12 to get the month name: \n");
    scanf("%d", &num);

    switch(num){
        case 1:
        printf("January\n");
        break;
        case 2:
        printf("February\n");
        break;
        case 3:
        printf("March\n");
        break;
        case 4:
        printf("April\n");
        break;
        case 5:
        printf("May\n");
        break;
        case 6:
        printf("June\n");
        break;
        case 7:
        printf("July\n");
        break;
        case 8:
        printf("August\n");
        break;
        case 9:
        printf("September\n");
        break;
        case 10:
        printf("October\n");
        break;
        case 11:
        printf("November\n");
        break;
        case 12:
        printf("December\n");
        break;
    }

/*********************************************************************************************************/
    clock_t end = clock();
    time_t wallEnd = time(NULL);
    //printf("CPU ticks: %ld\n", end);
    //printf("Epoch ticks: %ld\n", wallEnd);
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("\nCPU time used = %f ms\n", time_spent);
    printf("Wall time used = %ld seconds\n", (wallEnd - wallBegin));
}