#include <stdio.h>

void merge(int *array, int start, int middle, int end) {
  int tempArray[end - start];
  int tempElement = 0;
  int leftElement = start;
  int rightElement = middle;

  while (leftElement < middle && rightElement < end) {
    if (array[leftElement] < array[rightElement]) {
      tempArray[tempElement] = array[leftElement];
      leftElement++;
      tempElement++;
    } else {
      tempArray[tempElement] = array[rightElement];
      rightElement++;
      tempElement++;
    }
  }

  while (leftElement < middle) {
    tempArray[tempElement] = array[leftElement];
    leftElement++;
    tempElement++;
  }
  while (rightElement < end) {
    tempArray[tempElement] = array[rightElement];
    rightElement++;
    tempElement++;
  }

  for (int i = 0; i < end - start; i++) {
    array[start + i] = tempArray[i];
  }
}

void mergeSort(int *array, int start, int end) {
  if (end - start > 1) {
    int middle = (start + end) / 2;
    mergeSort(array, start, middle);
    mergeSort(array, middle, end);
    merge(array, start, middle, end);
  }
}

int main(int argc, char const *argv[]) {
  int array[] = {23, 432423, 123, 231545, 21335, 534534, 36, 542435, 523452345, 643, 132, 432, 123, 543, 9876, 345, 324, 456, 3456, 523534, 34, 23, 34, 53, 4534, 5, 345, 435, 2, 5, 7, 5, 4546, 3, 5, 6534, 54};
  int arraySize = sizeof(array) / sizeof(int);

  mergeSort(array, 0, arraySize);
  printf("Elementos em Ordem:\n");
  for (int i = 0; i < arraySize; i++) {
    printf("e[%i]: %d\n", i, array[i]);
  }

  return 0;
}