#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
//#include "myheader.h"

bool isPrime(int num);

int main(int argc, char* argv[]){

/*
#65 Write a C program that prints out the prime numbers between 1 and 200.
    The output should be such that each row contains a maximum of 20 prime numbers.

***NOTE*** In math, prime numbers are whole numbers greater than 1, that have only two factors – 1 and the number itself.
           Prime numbers are divisible only by the number 1 or itself.

2 3 5 7 11 13 17 19 23 29
31 37 41 43 47 53 59 61 67 71
73 79 83 89 97 101 103 107 109 113
127 131 137 139 149 151 157 163 167 173
179 181 191 193 197

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

    int count = 0;

    for(int i = 1; i <= 200; i++){
        if(isPrime(i) == true){
            printf("%d\t", i);
            count++;
            if(count % 10 == 0){
                printf("\n");
            }
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

bool isPrime(int num){
    if(num == 2 || num == 3){
        return true;
    }
    else if(num <= 1 || (num % 2 == 0) || (num % 3 == 0)){
        return false;
    }

    int i = 5;
    while (i*i <= num)
    {
        if ((num % i)==0 || (num % (i + 2))==0){
            return false;
        }
        i += 6;
    }

    return true;
}