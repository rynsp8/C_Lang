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
#22 Write a C program that read 5 numbers and sum of all odd values given.

Test Data :
Input the first number: 11
Input the second number: 17
Input the third number: 13
Input the fourth number: 12
Input the fifth number: 5
Expected Output:
Sum of all odd values: 11 + 17 + 13 + 5 = 46

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

    int num1, num2, num3, num4, num5, answer = 0;

    printf("Input the first number: \n");
    scanf("%d", &num1);
    printf("Input the second number: \n");
    scanf("%d", &num2);
    printf("Input the third number: \n");
    scanf("%d", &num3);
    printf("Input the fourth number: \n");
    scanf("%d", &num4);
    printf("Input the fifth number: \n");
    scanf("%d", &num5);

    int intArray[] = {num1, num2, num3, num4, num5};

    for(int i = 0; i < 5; i++){
        if(intArray[i] % 2 != 0){
            answer += intArray[i];
        }
    }

    printf("Sum of all odd values: %d", answer);


/*********************************************************************************************************/
    clock_t end = clock();
    time_t wallEnd = time(NULL);
    //printf("CPU ticks: %ld\n", end);
    //printf("Epoch ticks: %ld\n", wallEnd);
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("\nCPU time used = %f ms\n", time_spent);
    printf("Wall time used = %ld seconds\n", (wallEnd - wallBegin));
}