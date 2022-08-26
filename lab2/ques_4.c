// Quick sort in C

#include <stdio.h>



int partition(int arr[], int offset, int size) {
	int x = arr[size];
	int i = offset - 1;
	int j;
	int temp;
	for(j = offset; j < size; j++) {
		if (arr[j] <= x) {
			i++;
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	temp = arr[i + 1];
	arr[i + 1] = arr[size];
	arr[size] = temp;
	return i + 1;
}

void quickSort(int arr[], int offset, int size) {
	int pivot;
	if (offset < size) {
		pivot = partition(arr, offset, size);
		quickSort(arr, offset, pivot - 1);
		quickSort(arr, pivot + 1, size);
	}
}


void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}


int main() {
  int data[] = {8, 7, 2, 1, 0, 9, 6};
  
  int n = sizeof(data) / sizeof(data[0]);
  
  printf("Unsorted Array\n");
  printArray(data, n);
  
  quickSort(data, 0, n - 1);
  
  printf("Sorted array in ascending order: \n");
  printArray(data, n);
}
