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
76. Write a C program to calculate and prints the squares and cubes of the numbers
    from 0 to 20 and uses tabs to display them in a table of values.

Sample Output:
Number Square Cube
=========================
0 0 0
1 1 1
2 4 8
3 9 27
.....
18 324 5832
19 361 6859
20 400 8000

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

/*********************************************************************************************************/

    printf("Number Square Cube\n=========================\n");

    for(int i = 0; i <= 20; i++){
        printf("%d\t%d\t%d\n", i, i * i, i*i*i);
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

