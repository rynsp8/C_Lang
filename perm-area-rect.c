#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <unistd.h>
#include "myheader.h"

int main(int argc, char* argv[]){

/*Write a C program to compute the perimeter and area of a rectangle wth a height of 7 inches and width of 5 inches.

P = 2(l + w)
A = wl
*/

    int P = 0, A = 0, l = 0, w = 0;

    printf("We will be calculating the perimeter and area of a rectangle\nPlease enter the length (l) of the rectangle: ");
    scanf("%d", &l);
    sleep(1);
    printf("Thank you. Your length (l) is %d\n", l);
    sleep(1);
    printf("Please enter the width (w) of the rectangle: ");
    scanf("%d", &w);
    sleep(1);
    printf("Thank you. Your width (w) is %d\n", w);
    sleep(1);
    printf("Calculating the perimeter.  P = 2(1 + w)\n");
    sleep(1);
    P = 2 * (l+w);
    printf("Your perimeter is %d units long\n", P);
    sleep(1);
    printf("Now to calculate the area of your rectangle. A = wl\n");
    sleep(1);
    A = w*l;
    printf("Your area is %d units squared\n", A);
}