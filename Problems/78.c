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
#78 Write a C program that demonstrates the difference between
    predecrementing and postdecrementing using the decrement operator --.

Sample Output:
Predecrementing:
x = 10
x-- = 10
x = 9

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

/*********************************************************************************************************/

    int x = 10;
    int a;

    printf("x = %d\n", x);
    //apparently the decrement operator --, after the variable x is the POST-DECREMENT operator
    a = x--;
    printf("x-- = %d\n", a);
    x = 10;
    //apparently the decrement operator --, BEFORE the variable is the PRE-DECREMENT operator
    a = --x;
    printf("x = %d\n", a);


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

