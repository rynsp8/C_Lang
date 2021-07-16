#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100

int main(int argc, char* argv[]){

    int arr[MAX];
    int i, r, j, a;

    int x = atoi(argv[1]);

    while(x != NULL){

        r = x % 10;

        arr[i] = r;
        i++;

        x = x / 10;
    };

    for(j = 0; arr[j] != NULL; j++){
        a = a + arr[j];
        printf("%d + arr[%d] = %d\n", a - arr[j], arr[j], a);
    }

    if(a % 3 == 0){
        printf("Your number is divisible by 3\n");
    }
    else {
        printf("Your number is NOT divisible by 3\n");
    }

    printf("All integers = %d\n", a);
}