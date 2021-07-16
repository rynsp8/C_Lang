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

This is an application of the insertion sort algorithm
Sorting array of 10 integers
sorting CPU time = 0.000136 ms
sorintg Wall time = 0 seconds
CPU time used = 0.000136 ms
Wall time used = 0 seconds

Sorting an array of 100 integers
sorting CPU time = 0.000810 ms
sorintg Wall time = 0 seconds
CPU time used = 0.000810 ms
Wall time used = 0 seconds

Sorting an array of 1000 integers
sorting CPU time = 0.006474 ms
sorintg Wall time = 0 seconds
CPU time used = 0.006474 ms
Wall time used = 0 seconds

Sorting an array of 10000 integers
sorting CPU time = 0.108538 ms
sorintg Wall time = 0 seconds
CPU time used = 0.108538 ms
Wall time used = 3 seconds

Sorting an array of 100000 integers
sorting CPU time = 6.714218 ms
sorintg Wall time = 13 seconds
CPU time used = 6.714218 ms
Wall time used = 32 seconds
*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;

    //open file to read-ony
    FILE *fp = fopen("100000-random", "r");

    //check for fopen error on file
    if(fp == NULL){
        perror("Error");
        return(1);
    }

    //create buffer of 10 integers + 1 for NULL character...
    int scanBuff[1] = {0};
    int* newArray = malloc((100000 * sizeof(int)) + 1);
    int i = 0;

    printf("newArray before fread() - ");

    //for(int j = 0; j < 100000; j++){
    //    printf("%d, ", newArray[j]);
    //}

    printf("\nfscanf() into newArray- ");

    //using fscanf() to read out the formated integers into scanBuff
    while(fscanf(fp, "%d, ", &scanBuff[0]) == 1){
        newArray[i] = scanBuff[0];
        //printf("%d, ", scanBuff[0]);
        i++;
    }


    clock_t beginSort = clock(); //returns number of clock ticks
    time_t wallBeginSort = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;

    //insertion sort algorithm
    for(int j = 1; j < 100000; j++){
        int temp = newArray[j];
        int k = j - 1;
        while(k > -1 && newArray[k] > temp){
            newArray[k + 1] = newArray[k];
            k = k - 1;
        }
        newArray[k + 1] = temp;
    }

    clock_t endSort = clock();
    time_t wallEndSort = time(NULL);

    //print the numbers that now exist in newArray
    printf("\nnewArray after sorting() - ");
    //for(int j = 0; j < 100000; j++){
    //    printf("%d, ", newArray[j]);
    //}

    //printf("\n");

    //close the file pointer and free memory used by newArray
    fclose(fp);
    free(newArray);

/*********************************************************************************************************/

    clock_t end = clock();
    time_t wallEnd = time(NULL);
    //printf("CPU ticks: %ld\n", end);
    //printf("Epoch ticks: %ld\n", wallEnd);
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    double sorttime_spent = (double)(endSort - beginSort) / CLOCKS_PER_SEC;

    printf("\nsorting CPU time = %f ms\n", time_spent);
    printf("sorintg Wall time = %ld seconds\n", (wallEndSort - wallBeginSort));

    printf("\nCPU time used = %f ms\n", time_spent);
    printf("Wall time used = %ld seconds\n", (wallEnd - wallBegin));

    return 0;

}
