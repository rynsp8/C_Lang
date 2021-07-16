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
#14 Write a C program to calculate a bike’s average consumption from the given total distance (integer value)
    traveled (in km) and spent fuel (in liters, float number – 2 decimal point).

Test Data :
Input total distance in km: 350
Input total fuel spent in liters: 5
Expected Output:
Average consumption (km/lt) 70.000

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

    float distance = 0.0, spentFuel = 0.0;

    printf("Input total distance in km: \n");
    scanf("%f", &distance);
    printf("Input total fuel spent in liters: \n");
    scanf("%f", &spentFuel);

    printf("Average comsumption (km/lt): %.2f\n", (distance / spentFuel));




/*********************************************************************************************************/
    clock_t end = clock();
    time_t wallEnd = time(NULL);
    //printf("CPU ticks: %ld\n", end);
    //printf("Epoch ticks: %ld\n", wallEnd);
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("CPU time used = %f ms\n", time_spent);
    printf("Wall time used = %ld seconds\n", (wallEnd - wallBegin));
}