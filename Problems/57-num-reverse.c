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
#57 Write a C program to reverse and print a given number

Input a number:
The original number = 234
The reverse of the said number = 432

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

    char x;

    printf("Input the original number = ");
    scanf("%s", &x);
    //printf("%s\n", &x);

    int length = strlen(&x);
    int i = length - 1;
    //printf("length %d\n", length);

    int* newArray = intArray(&x);

    printf("The reverser of you number is = ");

    while(i > -1){
        printf("%d", newArray[i]);
        i--;
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