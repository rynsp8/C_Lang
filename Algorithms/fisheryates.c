#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
#include "myheader.h"
int x;

int main(int argc, char* argv[]){
/*

10
    It took 10 passes to create array
    It took 9 passes to sort the array
    CPU time used = 0.000097 ms
    Wall time used = 0 seconds

100
    It took 100 passes to create array
    It took 99 passes to sort the array
    CPU time used = 0.000424 ms
    Wall time used = 0 seconds

1000
    It took 1000 passes to create array
    It took 999 passes to sort the array
    CPU time used = 0.002951 ms
    Wall time used = 0 seconds

10000
    It took 10000 passes to create array
    It took 9999 passes to sort the array
    CPU time used = 0.035178 ms
    Wall time used = 0 seconds

100000
    It took 100000 passes to create array
    It took 99999 passes to sort the array
    CPU time used = 0.375947 ms
    Wall time used = 11 seconds

*/

    clock_t begin = clock(); //returns number of clock ticks
    time_t wallBegin = time(NULL); //Epoch is time since 00:00:00 UTC, January 1, 1970;
    //printf("CPU ticks: %ld\n", begin);
    //printf("Epoch ticks: %ld\n", wallBegin);
	srand(time(NULL));

	x = atoi(argv[1]);
	int firstpass = 0, sortpass = 0;

    FILE *file = fopen("10-random", "w+");

    if(file == NULL){
        perror("Failed: ");
        return 1;
    }

	int* array = malloc(x * sizeof(int));

	for(int i = 0; i < x; i++){
		array[i] = i;
		firstpass++;
	}

	printf("array - ");
	for(int i = 0; i < x; i++){
		printf("%d, ", array[i]);
	}
	printf("\n");

	for(int i = x - 1; i > 0; i--){
		int randNum = rand() % (i + 1);
		int temp = 0;
		temp = array[i];
		array[i] = array[randNum];
		array[randNum] = temp;
		sortpass++;
	}

    printf("array - ");
	for(int i = 0; i < x; i++){
		//fwrite(&array[i], sizeof(int), 1, file);
		fprintf(file, "%d, ", array[i]);
		printf("%d, ", array[i]);
	}
    printf("\n");

    //fwrite(array, sizeof(array), sizeof(int), file);

    free(array);
    fclose(file);

/*********************************************************************************************************/

    clock_t end = clock();
    time_t wallEnd = time(NULL);
    //printf("CPU ticks: %ld\n", end);
    //printf("Epoch ticks: %ld\n", wallEnd);
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("It took %d passes to create array\n", firstpass);
    printf("It took %d passes to sort the array\n", sortpass);
    printf("\nCPU time used = %f ms\n", time_spent);
    printf("Wall time used = %ld seconds\n", (wallEnd - wallBegin));

    return 0;

}
