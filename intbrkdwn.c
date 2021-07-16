#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include "myheader.h"

int main(int argc, char* argv[]){

    if(argc != 2){
        printf("Usage: intbrkdwn.c [number]");
        exit(1);
    }

    if(isNum(argv[1]) == false){
        printf("Please, only positive integers. No letters.\n");
        exit(2);
    }

    int i = 0, a = 0;

    int* newArray = intArray(argv[1]);

    for(i = 0; newArray[i] != '\0'; i++){
        printf("Memory address of newArray[%d] is: %p\n", i, &newArray[i]);
    }

    for(i = 0; newArray[i] != '\0'; i++){
        printf("newArray[%d] = %d; ", i, newArray[i]);
    }
    printf("\n");

    for(i = 0; newArray[i] != '\0'; i++){
        a = a + newArray[i];
        printf("%d + %d = %d\n", a - newArray[i], newArray[i], a);
    }

    free(newArray);
};
