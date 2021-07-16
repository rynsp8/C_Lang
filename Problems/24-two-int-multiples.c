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
#24 Write a C program that reads two integers and checks whether they are multiples or not.

Test Data :
Input the first number: 5
Input the second number: 15
Expected Output:
Multiples!

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

    int num1, num2;

    printf("Input the first number: \n");
    scanf("%d", &num1);
    printf("Input the second number: \n");
    scanf("%d", &num2);


    if(num1 > num2){
        if(num1 % num2 == 0){
            printf("Multiples!\n");
        }
        else{
            printf("The two numbers are not multiples.\n");
        }
    }
    else if(num2 % num1 == 0){
        printf("Multiples!\n");
    }
    else{
        printf("The two numbers are not multiples.");
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