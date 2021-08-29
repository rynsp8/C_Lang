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
#82. Write a C program that reads in a five-digit integer and determines whether or not it’s a palindrome.

Sample Input: 33333
Sample Output:

Input a five-digit number: 33333 is a palindrome.

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

/*********************************************************************************************************/

    char x1[5];

    printf("Input a five-digit interger: ");
    scanf("%s", x1);

    //char *x2 = strdup(x1);

    for(int i = 0, j = 4; i < 5; i++, j--){
        if(x1[i] == x1[j]){
            //printf("%c %c\n", x1[i], x1[j]);
            continue;
        }else{
            //printf("%c %c\n", x1[i], x1[j]);
            printf("no go\n");
            return 1;
        }
    };


    printf("%s is a palindrome\n", x1);




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

