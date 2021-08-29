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
#83. Write a C program which reads an integer (7 digits or fewer) and count number of 3s in the given number.

Sample Input: 538453
Sample Output:
Input a number: The number of threes in the said number is 2

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

/*********************************************************************************************************/

    char x[7];
    int three = 0;

    printf("Input an integer up to 7 digits long: ");
    scanf("%s", x);

    //char *x2 = strdup(x1);

    for(int i = 0; i < 7; i++){
        if(x[i] == '3'){
            three++;
        }
    }


    printf("The number of threes (3) is encountered is %d\n", three);




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

