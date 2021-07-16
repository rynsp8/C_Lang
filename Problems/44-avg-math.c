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
#44 Write a C program to calculate the average marks of mathematics of some students.
    Input 0 (excluding to calculate the average) or negative value to terminate the input process.

Test Data :
Input Mathematics marks (0 to terminate):
10
15
20
25
0
Expected Output:
Average marks in Mathematics: 17.50

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

    int avg = 0, avgCount = 0;
    int numArray[5];

    //when it says "... to terminate" I believe it means to execute the program.

    printf("Input Mathematics marks (0 to terminate): \n");
    scanf("%d", &numArray[0]);
    scanf("%d", &numArray[1]);
    scanf("%d", &numArray[2]);
    scanf("%d", &numArray[3]);
    scanf("%d", &numArray[4]);

    for(int i = 0; i < 5; i ++){
        if(numArray[i] != 0){
            avg += numArray[i];
            avgCount++;
        }
    }

    printf("Average marks in Mathematics: %.2f\n", (float)avg / avgCount);


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