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

This is an application of the merge sort algorithm

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;

    //open file to read-ony
    FILE *fp = fopen("10-random", "r");

    //check for fopen error on file
    if(fp == NULL){
        perror("Error");
        return(1);
    }

    //create buffer of 10 integers + 1 for NULL character...
    int scanBuff[1] = {0};
    int* newArray = malloc((10 * sizeof(int)) + 1);
    int i = 0;

    printf("newArray before fread() - ");

    for(int j = 0; j < 10; j++){
        printf("%d, ", newArray[j]);
    }

    printf("\nfscanf() into newArray- ");

    //using fscanf() to read out the formated integers into scanBuff
    while(fscanf(fp, "%d, ", &scanBuff[0]) == 1){
        newArray[i] = scanBuff[0];
        printf("%d, ", scanBuff[0]);
        i++;
    }


    clock_t beginSort = clock(); //returns number of clock ticks
    time_t wallBeginSort = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;

    //merge sort algorithm
    
    

    clock_t endSort = clock();
    time_t wallEndSort = time(NULL);

    //print the numbers that now exist in newArray
    //printf("\nnewArray after sorting() - ");
    //for(int j = 0; j < 10; j++){
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
