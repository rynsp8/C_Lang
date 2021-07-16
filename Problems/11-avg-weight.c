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
#11 Write a C program that accepts two item’s weight (floating points' values ) and number of purchase (floating points' values) and calculate the average value of the items.

Test Data :
Weight - Item1: 15
No. of item1: 5
Weight - Item2: 25
No. of item2: 4
Expected Output:
Average Value = 19.444444

((15 * 5) + (25 * 4))/9 = 19.444444

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

    float weightOne, countOne, weightTwo, countTwo, average;

   printf("What is the weight of item 1: \n");
   scanf("%f", &weightOne);
   printf("How many of item 1: \n");
   scanf("%f", &countOne);
   printf("What is the weight of item 2: \n");
   scanf("%f", &weightTwo);
   printf("How many of item 2: \n");
   scanf("%f", &countTwo);

    printf("The average weight is = %f\n", ((weightOne * countOne) + (weightTwo * countTwo))/(countOne + countTwo));








    clock_t end = clock();
    time_t wallEnd = time(NULL);
    //printf("CPU ticks: %ld\n", end);
    //printf("Epoch ticks: %ld\n", wallEnd);
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("CPU time used = %f ms\n", time_spent);
    printf("Wall time used = %ld seconds\n", (wallEnd - wallBegin));
}