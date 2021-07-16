#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
#include "myheader.h"

bool randCheck(int y);
int randNum(int x);
int x;
int* randArray;

int main(int argc, char* argv[]){

/*
Create an array of variable length of randomized integers.
10
    It took 70 passes to fill the array.
    CPU time used = 0.000125 ms
    Wall time used = 0 seconds
100
    It took 420 passes to fill the array.
    CPU time used = 0.000814 ms
    Wall time used = 0 seconds
1000
    It took 6980 passes to fill the array.
    CPU time used = 0.020060 ms
    Wall time used = 0 seconds
10000
    It took 100578 passes to fill the array.
    CPU time used = 2.309038 ms
    Wall time used = 16 seconds
100000
    It took 1150593 passes to fill the array.
    CPU time used = 261.799031 ms
    Wall time used = 534 seconds
*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

    if(argc != 2){
        printf("Usage: randArray.c [size of array]");
        exit(1);
    }

    if(isNum(argv[1]) == false){
        printf("Please, only positive integers. No letters.\n");
        exit(2);
    }

    x = atoi(argv[1]);
    int i = 1, pass = 0;

    randArray = malloc(x * sizeof(int));

    srand(time(NULL));

    randArray[0] = randNum(x);

    while(i < x){
        int uniqueNum = randNum(x);
        if(randCheck(uniqueNum) == true){
            //printf("%d\n", uniqueNum);
            randArray[i] = uniqueNum;
            pass++;
            //printf("randArray[%d] - %d\n", i, randArray[i]);
            i++;
        }
        else if(randCheck(uniqueNum) == false){
            pass++;
            continue;
        }
    }

    printf("\nrandArray[");
    for(int j = 0; j < x; j++){
        if(j < x - 1){
            printf("%d, ", randArray[j]);
        }
        else{
            printf("%d]\n", randArray[j]);
        }
    }
    printf("It took %d passes to fill the array.\n", pass);

    free(randArray);
    //free(intArray);

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

bool randCheck(int y){
    //printf("y = %d\n", y);
    for(int i = 0; i < x; i++){
        if(y == randArray[i]){
            return false;
        }
    }
    return true;
}

int randNum(int n){

    int num = (rand() % (n - 1 + 1)) + 1;

    return num;
}