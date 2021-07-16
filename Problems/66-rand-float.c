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
#66 Write a C program that generates 50 random numbers between -0.5 and 0.5 and writes them in a file rand.dat.
    The first line of ran.dat contains the number of data and the next 50 lines contains the 50 random numbers.

50
-0.4215
0.2620
0.3065
-0.0485
.... 0.3980
0.1750
0.4780
-0.2915
0.0715
0.3565

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

    srand(time(NULL));

    FILE *fp = fopen("ran.dat", "w+");

    fprintf(fp, "50 floating point numbers between 0.5 and -0.5\n");
    printf("\n50\n");
    for(int i = 0; i < 50; i++){
        int testnum = rand();
        float x = (float)rand()/ (float)(RAND_MAX/.5);
        float y = (float)rand() / (float)(RAND_MAX / -.5);
        if(testnum % 2 == 0){
            printf("%0.4f\n", x);
            fprintf(fp, "%0.4f\n", x);
        }
        else{
            printf("%0.4f\n", y);
            fprintf(fp, "%0.4f\n", y);
        }
    }


    fclose(fp);

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

