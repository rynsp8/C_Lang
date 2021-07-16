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
#19 Write a C program that accepts 4 integers p, q, r, s from the user where r and s are positive and p is even.
    If q is greater than r and s is greater than p and if the sum of r and s is greater than the sum of p and q print
    "Correct values", otherwise print "Wrong values".

Test Data :
Input the second integer: 35
Input the third integer: 15
Input the fourth integer: 46
Expected Output:
Wrong values

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

    int p = 0, q = 0, r = 0, s = 0;

    printf("Input the first integer: \n");
    scanf("%d", &p);
    printf("Input the second integer: \n");
    scanf("%d", &q);
    printf("Input the third integer: \n");
    scanf("%d", &r);
    printf("Input the fourth integer: \n");
    scanf("%d", &s);


    if(r > 0 && s > 0 && (q % 2 == 0) && q > r && s > p && ((r + s) > (p + q))){
        printf("Correct values.\n");
    }
    else{
        printf("Wrong values.\n");
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