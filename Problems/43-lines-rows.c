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
#43 Write a C program that reads two integers p and q, print p number of lines in a sequence of 1 to q in a line.

Test Data :
Input number of lines: 5
Number of characters in a line: 6
Expected Output:
1 2 3 4 5 6
7 8 9 10 11 12
13 14 15 16 17 18
19 20 21 22 23 24
25 26 27 28 29 30

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

    int p, q, rowCount = 1, lineCount = 0, i = 0;

    printf("Input number of lines: \n");
    scanf("%d", &p);
    printf("Input number of characters in a lines: \n");
    scanf("%d", &q);

    for(int j = 0; j < p; j++){
        if(lineCount < p){
            while(i < q){
                printf("%d\t", rowCount++);
                i++;
            }
        }
        printf("\n");
        lineCount++;
        i = 0;
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