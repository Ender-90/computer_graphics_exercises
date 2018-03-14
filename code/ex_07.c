
void rewrite(int * inputArray, int * outputArray, int arrayLength){
    int i;
    for(i = 0; i < arrayLength; i++){
        if(*(inputArray + i) >= 0){
            *(outputArray + i) = *(inputArray + i);
        } else {
            *(outputArray + i) = 0;
        }
    }
}
