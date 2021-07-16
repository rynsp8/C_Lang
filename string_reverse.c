#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include "myheader.h"

int main(int argc, char* argv[]){

    if(argc != 2){
        printf("Usage: ./test [string]");
        exit(1);
    }

    int i, length = strlen(argv[1]);

    char* p = malloc(length * sizeof(char));

    for(i = 0; argv[1][i] !='\0'; i++){
        p[i] = argv[1][length - 1];
        length--;
    }

    printf("The reverse of %s is %s\n", argv[1], p);

    free(p);

}