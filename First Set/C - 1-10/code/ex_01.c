
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
