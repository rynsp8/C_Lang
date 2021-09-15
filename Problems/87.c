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
#87. Write a C program to display the sizes and ranges for each of C's data types.

Sample Output:
Ranges for integer data types in C

------------------------------------------------------------
int8_t                    -128                   127
int16_t                 -32768                 32767
int32_t            -2147483648            2147483647
int64_t   -9223372036854775808   9223372036854775807
uint8_t                      0                   255
uint16_t                     0                 65535
uint32_t                     0            4294967295
uint64_t                     0  18446744073709551615

============================================================

Ranges for real number data types in C

------------------------------------------------------------
float          1.175494e-38    3.402823e+38
double        2.225074e-308   1.797693e+308
long double  3.362103e-4932  1.189731e+4932

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

/*********************************************************************************************************/

    printf("\nRanges for integer data types in C\n------------------------------\n");
    printf("int8_t");
    printf("int16_t");
    printf("int32_t");
    printf("int64_t");
    printf("uint8_t");
    printf("uint16_t");
    printf("uint32_t");
    printf("uint64_t");
    
  
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

