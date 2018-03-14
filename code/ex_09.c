
int palindrome (char * inputArray, int arrayLength){

    int i;
    int isPalindrome = 1;

    if ((arrayLength % 2) == 0){
        for (i = 0; i < (arrayLength / 2); i++){
            if(!(*(inputArray + i) == *(inputArray + arrayLength - 1 - i))){
                isPalindrome = 0;
                break;
            }
        }
    } else {
        for (i = 0; i < ((arrayLength - 1) / 2); i++){
            if(!(*(inputArray + i) == *(inputArray + arrayLength - 1 - i))){
                isPalindrome = 0;
                break;
            }
        }
    }

    return isPalindrome;
}
