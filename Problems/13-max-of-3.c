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
#13 Write a C program that accepts three integers and find the maximum of three.

Test Data :
Input the first integer: 25
Input the second integer: 35
Input the third integer: 15
Expected Output:
Maximum value of three integers: 35

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

    int i = 0, num1, num2, num3, max = 0;

    printf("Input the first integer: \n");
    scanf("%d", &num1);
    printf("Input the second integer: \n");
    scanf("%d", &num2);
    printf("Input third integer: \n");
    scanf("%d", &num3);

    int numArray[] = {num1, num2, num3};

    do{
        if(numArray[i] > numArray[i + 1]){
            max = numArray[i];
        }
        i++;
    }
    while(i < 3);

    printf("Maximum value of three integers is: %d\n", max);




/*********************************************************************************************************/
    clock_t end = clock();
    time_t wallEnd = time(NULL);
    //printf("CPU ticks: %ld\n", end);
    //printf("Epoch ticks: %ld\n", wallEnd);
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("CPU time used = %f ms\n", time_spent);
    printf("Wall time used = %ld seconds\n", (wallEnd - wallBegin));
}