#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <unistd.h>
#include <time.h>
#include "myheader.h"

int main(int argc, char* argv[]){

/*
#9 Write a C program that accepts two integers from the user and calculate the sum of those two integers
Note: Ignore leap year.

Test Data :
Input the first integer: 25
Input the second integer: 38
Expected Output:
Sum of the above two integers = 63
*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

    int intOne, intTwo;

   printf("We will calculate the sum of two integers.  Please input the first integer: \n");
   scanf("%d", &intOne);
   printf("Thank you.  Please intput the second integer: \n");
   scanf("%d", &intTwo);

    printf("The sum of the above two integers = %d\n", (intOne + intTwo));








    clock_t end = clock();
    time_t wallEnd = time(NULL);
    //printf("CPU ticks: %ld\n", end);
    //printf("Epoch ticks: %ld\n", wallEnd);
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("CPU time used = %f ms\n", time_spent);
    printf("Wall time used = %ld seconds\n", (wallEnd - wallBegin));
}