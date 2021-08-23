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
#73. Write a C program that reads in two integers and check whether the first integer is a multiple of the second integer.

Sample Input: 9 3
Sample Output:
Input the first integer : Input the second integer:
9 is a multiple of 3.

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

    int a, b;

    printf("Please enter one integer: \n");
    scanf("%d", &a);
    printf("Please enter another integer: \n");
    scanf("%d", &b);

    if(a % b == 0){
        printf("%d is a multiple of %d", a, b);
    }else{
        printf("%d is NOT a multiple of %d", a, b);
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


