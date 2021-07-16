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
#51 Write a C program to read an array of length 6, change the first element by the last,
    the second element by the fifth and the third element by the fourth. Print the
    elements of the modified array.

Test Data:
Input the 5 members of the array:
15
20
25
30
35

Expected Output:
array_n[0] = 35
array_n[1] = 30
array_n[2] = 25
array_n[3] = 20
array_n[4] = 15

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

    int intArray[6];
    int arrSize = sizeof(intArray)/sizeof(intArray[0]);
    int tmp;

    printf("Input the 5 numbers of the array: \n");
    for(int i = 0; i < arrSize; i++){
        scanf("%d", &intArray[i]);
    }

    if(arrSize % 2 != 0){
        for(int i = 0, r = arrSize - 1; i < arrSize; i++){
            tmp = intArray[i];
            intArray[i] = intArray[r];
            intArray[r] = tmp;
            r--;
        }
    }
    else{
        for(int i = 0, r = arrSize - 1; i < (arrSize/2); i++){
            tmp = intArray[i];
            printf("tmp = %d\t", tmp);
            intArray[i] = intArray[r];
            printf("intArray[%d] = %d\t", i, intArray[i]);
            intArray[r] = tmp;
            printf("intArray[%d] = %d\n", r, intArray[r]);
            r--;
        }
    }

    for(int i = 0; i < arrSize; i++){
        printf("n[%d] = %d\n", i, intArray[i]);
    }



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