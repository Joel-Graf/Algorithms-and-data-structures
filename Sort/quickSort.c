#include <stdio.h>

void swap(int *elementA, int *elementB) {
  int aux = *elementA;
  *elementA = *elementB;
  *elementB = aux;
}

int pivotArray(int *array, int start, int end) {
  int pivot = array[end-1];
  int lastLowerElemenent = start;
  for(int i = start; i < end-1; i++) {
    if(array[i] <= pivot) {
      swap(&array[i], &array[lastLowerElemenent]);
      lastLowerElemenent++;
    }
  }
  swap(&array[end-1], &array[lastLowerElemenent]);
  return lastLowerElemenent;
}

void quickSort(int *array, int start, int end) {
  int numberOfElements = end - start;
  if(numberOfElements > 1) {
    int pivot = pivotArray(array, start, end); 
    quickSort(array, start, pivot);
    quickSort(array, pivot+1, end);
  }
}

int main(int argc, char const *argv[]) {
  int array[] = {23, 432423, 123, 231545, 21335, 534534, 36, 542435, 523452345, 643, 132, 432, 123, 543, 9876, 345, 324, 456, 3456, 523534, 34, 23, 34, 53, 4534, 5, 345, 435, 2, 5, 7, 5, 4546, 3, 5, 6534, 54};
  int arraySize = sizeof(array) / sizeof(int);

  quickSort(array, 0, arraySize);
  printf("Elementos em Ordem:\n");
  for (int i = 0; i < arraySize; i++) {
    printf("e[%i]: %d\n", i, array[i]);
  }

  return 0;
}
