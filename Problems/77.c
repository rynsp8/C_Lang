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
#77. Write a C program that accepts principal amount, rate of interest and days for a loan and
    calculate the simple interest for the loan, using the following formula.

nterest = principal * rate * days / 365.

Sample Input:
10000
.1
365
0
Sample Output:
Input loan amount (0 to quit): Input interest rate: Input term of the loan in days: The interest amount is $1000.00
Input loan principal_amt (0 to quit):

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

/*********************************************************************************************************/

    float p = 0.0;
    float i = 0.0;
    int d = 0;

    printf("Input loan amount (0 to quit): ");
    scanf("%f", &p);
    printf("Input interest rate: ");
    scanf("%f", &i);
    printf("Input term of loan in days: ");
    scanf("%d", &d);

    printf("The interest amount is %.2f", ((p * i) * (d /365)));


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

