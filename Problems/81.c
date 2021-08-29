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
#81. Write a C program that reads the side (side sizes between 1 and 10 )
    of a square and prints a hollow square using hash (#) character.

Sample Input: 10
Sample Output:

Input the size of the square:
##########
#        #
#        #
#        #
#        #
#        #
#        #
#        #
#        #
##########

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

/*********************************************************************************************************/

    int x = 0;

    printf("How big do you want your square: ");
    scanf("%d", &x);

    for(int i = 0; i < x; i++){
        if(i == 0 || i == x - 1){
            for(int j = 0; j < x; j++){
                printf("#");
            }
        }else{
            printf("#");
            for(int k = 0; k < x; k++){
                if(k == x + 1 || k == x - 2){
                    printf("#");
                }else{
                    printf(" ");
                }
            }
        }

        printf("\n");
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

