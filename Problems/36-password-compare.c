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
#36 Write a C program to read a password until it is correct.
    For wrong password print "Incorrect password" and for correct password print "Correct password" and quit the program.
    The correct password is 1234.

Test Data :
Input the password: 1234
Expected Output:
Correct password

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);

   char password[5] = "1234";
   char userPass[5];

    printf("Input the password: \n");
    fgets(userPass, 5, stdin);

    printf("%s\n", userPass);

    //for strcmp to work, you have to account for the \0 character.
    if(strcmp(userPass, password) == 0){
        printf("correct Password\n");
    }
    else{
        printf("Incorrect password\n");
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