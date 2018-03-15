
int checkIfNumberInArray(int * arr, int arrayLength, int n){
    int result = -1;
    int i;

    for (i = 0; i < arrayLength; i++){
        if(n == *(arr + i)){
            result = i;
            break;
        }
    }

    return result;
}
