#include <stdio.h>
#include <stdlib.h>

char max_char(FILE * file, int * n){

    int counterArr[256] = {0};
    int i;
    char ch;
    int count;

    while( (ch = getc(file))!= EOF){
        counterArr[ch]++;
    }

    ch = 0;
    count = counterArr[0];

    for(i = 1; i < 256; i++){

        if(counterArr[i] > count){
            printf("%c", i);
            ch = i;
            count = counterArr[i];
        }
    }
    *n = count;
    return ch;
}
