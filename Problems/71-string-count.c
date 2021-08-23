#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
#include "myheader.h"

#define MAX_LIMIT 2048

int main(int argc, char* argv[]){

/*
71. Write a C program to copy a given string into another and count the number of characters copied.

Input a string
Original string: w3resource
Number of characters = 10

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

    char str[MAX_LIMIT];
    char str2[MAX_LIMIT];

    int i, j = 0;

    printf("Please input a string below with no spaces.\n");
    fgets(str, MAX_LIMIT, stdin);
    strcpy(str2, str);

    printf("Original string: %s", str2);

    for(i = 0; str[i] != '\0'; i++){
        //strcpy(str[i], str2[i]);
        //printf("str[%d]: %c\n", i, str[i]);
        j++;
    }

    printf("Number of characters: %d\n", j - 1);



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

