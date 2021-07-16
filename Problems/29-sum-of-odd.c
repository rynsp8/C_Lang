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
#29 Write a C program that reads 5 numbers and sum of all odd values between them.

Test Data :
Input the first number: 5
Input the second number: 7
Input the third number: 9
Input the fourth number: 10
Input the fifth number: 13
Expected Output:
Sum of all odd values: 34

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

    int intArray[5];
    int sum = 0;

    printf("Input the first number: \n");
    scanf("%d", &intArray[0]);
    printf("Input the second number: \n");
    scanf("%d", &intArray[1]);
    printf("Input the third number: \n");
    scanf("%d", &intArray[2]);
    printf("Input the fourth number: \n");
    scanf("%d", &intArray[3]);
    printf("Input the fifth number: \n");
    scanf("%d", &intArray[4]);

    for(int i = 0; i < 5; i++){
        if(intArray[i] % 2 != 0){
            sum += intArray[i];
        }
        else{
            continue;
        }
    }

    printf("Sum of all odd values: %d\n", sum);

/*********************************************************************************************************/
    clock_t end = clock();
    time_t wallEnd = time(NULL);
    //printf("CPU ticks: %ld\n", end);
    //printf("Epoch ticks: %ld\n", wallEnd);
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("\nCPU time used = %f ms\n", time_spent);
    printf("Wall time used = %ld seconds\n", (wallEnd - wallBegin));
}