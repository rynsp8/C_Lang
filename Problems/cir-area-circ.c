#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <unistd.h>
#include "myheader.h"

int main(int argc, char* argv[]){

/*Write a C program to compute the circumfrence and area of a circle wiht a radius of 6 inches.

C = 2*pi*r
A = (pi*r)squared
*/

    float C = 0.0, A = 0.0, r = 6.0;

    printf("We will be calucating the circumfrence and area of a circle with a radius of 6 inches.\n");
    sleep(1);
    printf("Circumfrence (C = 2 * pi * r) which is (C = 2 * pi * 6)\n");
    sleep(1);
    C = 2 * 3.14 * 6;
    printf("C = %f\n", C);
    A = 3.14 * pow(6.0, 2.0);
    printf("A = %f\n", A);

}