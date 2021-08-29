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
#85. Write a C program to print a table of all the Roman numeral equivalents of the decimal numbers in the range 1 to 50.
Sample Output:

I       VI      XI      XVI     L 50
II      VII     XII     XVII    C 100
III     VIII    XIII    XVIII   D 500
IV      IX      XIV     XIX     M 1000
V       X       XV      XX

Decimal  Roman
number   numeral
-------------------
1        I
2        II
3        III
4        IV
.....
98        LXXXXVIII
99        LXXXXIX
100        C

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

/*********************************************************************************************************/

    char romNum[10];
    int num;
    int remain;

    printf("Give me a number: ");
    scanf("%d", &num);

    while(num > 0){
        if(num >= 1000){
            for(int i = 0; i < (num / 1000); i++){
                printf("M");
            }
            num = num % 1000;
        }
        if(num < 1000 && num >= 500){
            for(int i = 0; i < (num / 500); i++){
                printf("D");
            }
            num = num % 500;
        }
        if(num < 500 && num >= 100){
            for(int i = 0; i < (num / 100); i++){
                printf("C");
            }
            num = num % 100;
        }
        if(num < 100 && num >= 50){
            for(int i = 0; i < (num / 50); i++){
                printf("L");
            }
            num = num % 50;
        }
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

