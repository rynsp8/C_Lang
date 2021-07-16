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
#37 Write a C program to read the coordinates(x, y) (in Cartesian system) and find the quadrant to which it belongs to (Quadrant -I, Quadrant -II, Quadrant -III, Quadrant -IV).
    Note: A Cartesian coordinate system is a coordinate system that specifies each point uniquely in a plane by a pair of numerical coordinates.
    These are often numbered from 1st to 4th and denoted by Roman numerals: I (where the signs of the (x,y) coordinates are I(+,+), II (−,+), III (−,−), and IV (+,−).

Test Data :
Input the Coordinate(x,y):
x: 25
y: 15
Expected Output:
Quadrant-I(+,+)

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

    int x, y, quadOne = 0, quadTwo = 0;

    printf("Input the Coordinates (x, y): \n");
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);

    if(x > 0){
        quadOne = 1;
    }
    if(y > 0){
        quadTwo = 1;
    }

    if(quadOne == 1 && quadTwo == 1){
        printf("Quadrant-I (+, +)\n");
    }
    else if(quadOne == 0 && quadTwo == 1){
        printf("Quadrant-II (-, +)\n");
    }
    else if(quadOne == 0 && quadTwo == 0){
        printf("Quadrant-III (-, -)\n");
    }
    else if(quadOne == 1 && quadTwo == 0){
        printf("Quadrant-IV (+, -)\n");
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