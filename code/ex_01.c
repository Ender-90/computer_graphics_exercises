#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void fillIntArray (int * arrayToFill, int arrayLength);
void Inverse (int * dataToInvert, int arrayLength);
void showArray (int * arrayToShow, int arrayLength);

int main ()
{
    srand(time(NULL));
    int size = 5;
    int * tab;
    tab = calloc(size, sizeof(int));
    
    showArray(tab, size);
    fillIntArray(tab, size);
    showArray(tab, size);
    Inverse(tab, size);
    showArray(tab, size);
    
  return 0;
}

void fillIntArray (int * arrayToFill, int arrayLength){
    int i;
    for(i = 0; i < arrayLength; i++){
        *(arrayToFill + i) = rand() % 10;
    }
}

void Inverse (int *dataToInvert, int arrayLength)
{
  int temporaryVar;
  int i;

  if ((arrayLength % 2) == 0)
    {

      for (i = 0; i < (arrayLength / 2); i++)
	{
	  temporaryVar = *(dataToInvert + i);
	  *(dataToInvert + i) = *(dataToInvert + arrayLength - 1 - i);
	  *(dataToInvert + arrayLength - 1 - i) = temporaryVar;
	}
    } else {
      for (i = 0; i < ((arrayLength - 1) / 2); i++)
	{
	  temporaryVar = *(dataToInvert + i);
	  *(dataToInvert + i) = *(dataToInvert + arrayLength - 1 - i);
	  *(dataToInvert + arrayLength - 1 - i) = temporaryVar;
	}  
    }
}

void showArray (int * arrayToShow, int arrayLength){
    
    int i;
    for(i = 0; i < arrayLength; i++){
        printf("%d ", *(arrayToShow  + i));
    }
    printf("\n");
}
