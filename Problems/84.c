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
#84. Write a C program to calculate and print the average of some integers. Accept all the values preceding 888.

Sample Input:12
15
24
888
Sample Output:
Input each number on a separate line (888 to exit):

The average value of the said numbers is 17.000000

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

/*********************************************************************************************************/

    int *intArray = malloc(sizeof(int));
    int userInput;
    int size = 1;
    int i = 0;
    float average = 0.0;

    printf("Input each number on a separate line (888 to exit): ");
    scanf("%d", &userInput);

    while(userInput != 888){
        size++;
        intArray = realloc(intArray, size * sizeof(int));
        intArray[i] = userInput;
        i++;
        scanf("%d", &userInput);
    }

    for(int j = 0; j < size; j++){
        average = average + intArray[j];
    }

    printf("The average value of user numbers is %.2f\n", average/(size - 1));

    free(intArray);
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

