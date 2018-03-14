
double averageOfIntArray (int * inputArray, int arrayLength){
    int i;
    double averageOf = 0;

    for(i = 0; i < arrayLength; i++){
        averageOf += *(inputArray + i);
    }

    return averageOf /= arrayLength;
}
