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
#86. Write a C program to display the sizes and ranges for each of C's data types.

Sample Output:
Size of C data types:

Type               Bytes

--------------------------------
char                 1
int8_t               1
unsigned char        1
uint8_t              1
short                2
int16_t              2
uint16t              2
int                  4
unsigned             4
long                 8
unsigned long        8
int32_t              4
uint32_t             4
long long            8
int64_t              8
unsigned long long   8
uint64_t             8
float                4
double               8
long double          16
_Bool                1

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

/*********************************************************************************************************/

    printf("\nSize of C data types\nType\t\t\tByte(s)\n------------------------------\n");
    printf("char\t\t\t%d\n", sizeof(char));
    printf("int8_t\t\t\t%d\n", sizeof(wint_t));
    printf("short\t\t\t%d\n", sizeof(short));
    printf("int16_t\t\t\t%d\n", sizeof(short));
    printf("uint16_t\t\t%d\n", sizeof(unsigned short));
    printf("int\t\t\t%d\n", sizeof(int));
    printf("unsigned\t\t%d\n", sizeof(unsigned));
    printf("long\t\t\t%d\n", sizeof(long));
    printf("unsigned long\t\t%d\n", sizeof(unsigned int));
    printf("int32_t\t\t\t%d\n", sizeof(int));
    printf("uint32_t\t\t%d\n", sizeof(unsigned int));
    printf("long long\t\t%d\n", sizeof(long long));
    printf("int64_t\t\t\t%d\n", sizeof(long long));
    printf("unsigned long long\t%d\n", sizeof(unsigned long long));
    printf("uint64_t\t\t%d\n", sizeof(unsigned long long));
    printf("float\t\t\t%d\n", sizeof(float));
    printf("double\t\t\t%d\n", sizeof(double));
    printf("long double\t\t%d\n", sizeof(long double));
    printf("bool\t\t\t%d\n", sizeof(bool));
    
/*
int16_t              2
uint16t              2
int32_t              4
uint32_t             4
int64_t              8
uint64_t             8
*/
    


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

