#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <unistd.h>
#include <time.h>
#include "myheader.h"

int main(int argc, char* argv[]){

/*
#16 Write a C program to read an amount (integer value) and break the amount into smallest possible number of bank notes.

Test Data :
Input the amount: 375
Expected Output:
There are:
3 Note(s) of 100.00
1 Note(s) of 50.00
1 Note(s) of 20.00
0 Note(s) of 10.00
1 Note(s) of 5.00
0 Note(s) of 2.00
0 Note(s) of 1.00

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

    int amount, hundred = 0, fifty = 0, twenty = 0, ten = 0, five = 0, two = 0, one = 0;

    printf("Input the amount: \n");
    scanf("%d", &amount);

    printf("amount: %d\n", amount);

    while(amount >= 100){
        hundred++;
        amount -= 100;
    }
    printf("amount: %d\tHundreds: %d\n", amount, hundred);
    while(amount >= 50){
        fifty++;
        amount -= 50;
    }
   printf("amount: %d\tFifties: %d\n", amount, fifty);
    while(amount >= 20){
        twenty++;
        amount-= 20;
    }
    printf("amount: %d\tTwenties: %d\n", amount, twenty);
    while(amount >= 10){
        ten++;
        amount -= 10;
    }
    printf("amount: %d\tTens: %d\n", amount, ten);
    while(amount >= 5){
        five++;
        amount -= 5;
    }
    printf("amount: %d\tFives: %d\n", amount, five);
    while(amount >= 2){
        two++;
        amount -=2;
    }
    printf("amount: %d\tTwo: %d\n", amount, two);
    while(amount >= 1){
        one++;
        amount -=1;
    }
    printf("amount: %d\tOnes: %d\n", amount, one);

    printf("%d Note(s) of 100.00\n", hundred);
    printf("%d Note(s) of 50.00\n", fifty);
    printf("%d Note(s) of 20.00\n", twenty);
    printf("%d Note(s) of 10.00\n", ten);
    printf("%d Note(s) of 5.00\n", five);
    printf("%d Note(s) of 2.00\n", two);
    printf("%d Note(s) of 1.00\n", one);

/*********************************************************************************************************/
    clock_t end = clock();
    time_t wallEnd = time(NULL);
    //printf("CPU ticks: %ld\n", end);
    //printf("Epoch ticks: %ld\n", wallEnd);
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("CPU time used = %f ms\n", time_spent);
    printf("Wall time used = %ld seconds\n", (wallEnd - wallBegin));
}