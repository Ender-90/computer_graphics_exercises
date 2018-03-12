#include <stdio.h>
#include <stdlib.h>

int palindrome (char * inputArray, int arrayLength);
int main()
{
    char inputArray[] = {'k', 'a', 'j', 'a', 'k'};

    printf("%d", palindrome(&inputArray, 5));
    return 0;
}

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
