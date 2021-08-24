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
75. Write a C program that accepts one seven-digit number and separates the number into its individual digits,
    and prints the digits separated from one another by two spaces each.

Sample Input: 2345678
Input a seven digit number:
Output: 2 3 4 5 6 7 8

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

/*********************************************************************************************************/

    char a[7];

    printf("Please input a seven digit integer:\n");
    scanf("%s", a);
    printf("Your number is %s\n", a);

    for(int i = 0; i < 7; i++){
        printf("%c  ", a[i]);
    }

    printf("\n");


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

