bool isNum(char *x){
    int i;
    int length = strlen(x);
    for(i = 0; i < length; i++){
        if(!isdigit(x[i])){
            return false;
        }
    }
    return true;
};

int* intArray(char* y){
    int length = strlen(y), a = 0, i = 0, r;
    int x = atoi(y);

    int* intArray = malloc(sizeof(length+1));

    while(x != '\0'){
        length--;
        r = x % 10;
        intArray[length] = r;
        i++;
        x = x/10;
    };

    return intArray;
}