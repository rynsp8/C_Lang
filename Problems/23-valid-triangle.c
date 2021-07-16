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
#23 Write a C program that reads three floating values and check if it is possible to make a triangle with them.
    Also calculate the perimeter of the triangle if the said values are valid.

Test Data :
Input the first number: 25
Input the second number: 15
Input the third number: 35
Expected Output:
Perimeter = 75.0

Valid triangle: Triangle Inequality Theorem - the sum of two sides is always greater than the third side.

a + b > c;
a + c > b;
b + c > a;

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

    float num1, num2, num3;

    printf("Input the first number: \n");
    scanf("%f", &num1);
    printf("Input the second number: \n");
    scanf("%f", &num2);
    printf("Input the third number: \n");
    scanf("%f", &num3);

    if((num1 + num2) > num3 && (num2 + num3) > num1 && (num3 + num1) > num2){
        printf("Perimeter = %f\n", (num1 + num2 + num3));
    }
    else{
        printf("This is not a valid triangle.\n");
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