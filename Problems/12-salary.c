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
#12 Write a C program that accepts an employee's ID, total worked hours of a month and the amount he received per hour.
    Print the employee's ID and salary (with two decimal places) of a particular month.

Test Data :
Input the Employees ID(Max. 10 chars): 0342
Input the working hrs: 8
Salary amount/hr: 15000
Expected Output:
Employees ID = 0342
Salary = U$ 120000.00

((15 * 5) + (25 * 4))/9 = 19.444444

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

    int hours;
    double empId, salary;

    do{
        printf("Employee ID: \n");
        scanf("%lf", &empId);
    }
    while(empId > 999999999);

    printf("How many hours did you work: \n");
    scanf("%d", &hours);
    printf("What's your hourly rate again: \n");
    scanf("%lf", &salary);

    printf("Employee ID = %d\n", (int)empId);
    printf("Salary = US$ %.2f\n", (hours * salary));









    clock_t end = clock();
    time_t wallEnd = time(NULL);
    //printf("CPU ticks: %ld\n", end);
    //printf("Epoch ticks: %ld\n", wallEnd);
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("CPU time used = %f ms\n", time_spent);
    printf("Wall time used = %ld seconds\n", (wallEnd - wallBegin));
}