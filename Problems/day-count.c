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

/*Write a C program to convert specified days into years, weeks and days.
Note: Ignore leap year.

Test Data :
Number of days : 1329
Expected Output :
Years: 3
Weeks: 33
Days: 3
*/

clock_t begin = clock();

    if(argc != 2){
        printf("Usage: test.c [number of days]");
        exit(1);
    }

    if(isNum(argv[1]) == false){
        printf("Please, only positive integers. No letters.\n");
        exit(2);
    }

    int days = atoi(argv[1]), years, weeks;
    /*
    years = days/365;
    weeks = (days % 365)/7;
    days = days - ((years * 365) + (weeks*7));
    */
    int year = 365, week = 7, day = 1;
    int yCount = 0, wCount = 0, dCount = 0;

    while(days >= year){
        yCount++;
        days -= year;
    }

    while(days >= week){
        wCount++;
        days -= week;
    }

    printf("Years: %d\nWeeks: %d\nDays: %d\n", yCount, wCount, days);

    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("time_spent = %f\n", time_spent);
}