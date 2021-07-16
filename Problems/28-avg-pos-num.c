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
#28 Write a C program that read 5 numbers and counts the number of positive numbers and print the average of all positive values.

Test Data :
Input the first number: 5
Input the second number: 8
Input the third number: 10
Input the fourth number: -5
Input the fifth number: 25
Expected Output:
Number of positive numbers: 4
Average value of the said positive numbers: 12.00

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

    float intArray[5];
    float posTot = 0.0, posCount = 0.0;

    printf("Input the first number: \n");
    scanf("%f", &intArray[0]);
    printf("Input the second number: \n");
    scanf("%f", &intArray[1]);
    printf("Input the third number: \n");
    scanf("%f", &intArray[2]);
    printf("Input the fourth number: \n");
    scanf("%f", &intArray[3]);
    printf("Input the fifth number: \n");
    scanf("%f", &intArray[4]);

    for(int i = 0; i < 5; i++){
        if(intArray[i] > 0){
            posTot += intArray[i];
            posCount++;
        }
        else{
            continue;
        }
    }

    printf("Number of positive numbers: %d\n", (int)posCount);
    printf("Average value of the positive numbers: %.2f", posTot / posCount);

/*********************************************************************************************************/
    clock_t end = clock();
    time_t wallEnd = time(NULL);
    //printf("CPU ticks: %ld\n", end);
    //printf("Epoch ticks: %ld\n", wallEnd);
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("\nCPU time used = %f ms\n", time_spent);
    printf("Wall time used = %ld seconds\n", (wallEnd - wallBegin));
}