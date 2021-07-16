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
#30 Write a C program to find and print the square of each one of the even values from 1 to a specified value.

Test Data :
List of square of each one of the even values from 1 to a 4 :
Expected Output:
2^2 = 4
4^2 = 16

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

   int n;

    printf("List teh square of each even number from 1 to integer n.  What is n: \n");
    scanf("%d", &n);

    for(int i = 0; i <= n; i++){
        if(i % 2 == 0){
            printf("%d^2 = %d \n", i, i * i);
        }
    }

    printf("\n");

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