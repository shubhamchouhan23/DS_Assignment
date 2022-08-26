// Bubble sort in C

#include <stdio.h>

void bubbleSort(int array[], int size)
{ 
  for (int count=0;count<size-1;++count) 
  {
    for (int i=0;i<size-count-1;++i) 
    {
      
      if (array[i] > array[i+1]) 
	{
    
        int temp = array[i];
        array[i] = array[i+1];
        array[i+1] = temp;
        }
    }
  }
}

void printArray(int array[], int size) 
{
  for (int i=0; i<size;++i) 
  {
    printf("%d ",array[i]);
  }
  printf("\n");
}

int main() {
  int data[] = {-2, 45, 0, 11, -9};
  
  int size = sizeof(data) / sizeof(data[0]);

  bubbleSort(data, size);
  
  printf("Sorted Array in Ascending Order:\n");
  printArray(data, size);
}
