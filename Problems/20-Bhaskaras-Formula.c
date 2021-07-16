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
#20 Write a C program to print the roots of Bhaskara’s formula from the given three floating numbers.
    Display a message if it is not possible to find the roots.

    D = b2 − 4ac

Test Data :
Input the first number(a): 25
Input the second number(b): 35
Input the third number(c): 12
Expected Output:
Root1 = -0.60000
Root2 = -0.80000

***NOTE***
use double for large numbers as it can go to 15 decimal digits for precision.
float has 6 decimal digits for precision

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

    double a, b, c, x1, x2;

    printf("Input the first number: \n");
    scanf("%lf", &a);
    printf("Input the second number: \n");
    scanf("%lf", &b);
    printf("Input the third number: \n");
    scanf("%lf", &c);

    double step1 = b * b - (4 * (a * c));
    double step2 = sqrt(step1);

    if(step2 > 0 && a != 0){
        x1 = (-b + step2) / (2 * a);
        x2 = (-b - step2) / (2 * a);
        printf("Root1 = %.5lf\n", x1);
        printf("Root2 = %.5lf\n", x2);
    }
    else{
        printf("\nImpossible to find the roots.\n");
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