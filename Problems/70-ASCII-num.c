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
#70. Write a C program to print the alphabet set in decimal and character form.

[65-A] [66-B] [67-C] [68-D] [69-E] [70-F] [71-G] [72-H] [73-I] [74-J] [75-K] [76-L] [77-M] [78-N] [79-O] [80-P] [81-Q] [82-R] [83-S] [84-T] [85-U] [86-V] [87-W] [88-X] [89-Y] [90-Z]
[97-a] [98-b] [99-c] [100-d] [101-e] [102-f] [103-g] [104-h] [105-i] [106-j] [107-k] [108-l] [109-m] [110-n] [111-o] [112-p] [113-q] [114-r] [115-s] [116-t] [117-u] [118-v] [119-w] [120-x] [121-y] [122-z]

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

    printf("Below is the table of ASCII to letter mapping for the English Alphabet\n");

    for(int i = 65; i <= 90; i++){
        printf("[%03d, %c]\t", i, (char)i);
    }

    for(int i = 97; i <= 121; i++){
        printf("[%03d, %c]\t", i, (char)i);
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

