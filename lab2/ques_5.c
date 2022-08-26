// Selection sort in C

#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selectionSort(int array[], int size) 
{
  for (int count = 0; count < size - 1; count++)
  {
    int min_idx = count;
    for (int i = count + 1; i < size; i++)
    {
      if (array[i] < array[min_idx])
        min_idx = i;
    }

    
    swap(&array[min_idx], &array[count]);
  }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int main() {
  int data[] = {20, 12, 10, 15, 2};
  int size = sizeof(data) / sizeof(data[0]);
  selectionSort(data, size);
  printf("Sorted array in Acsending Order:\n");
  printArray(data, size);
}
