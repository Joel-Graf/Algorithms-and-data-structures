#include <stdio.h>

void swap(int *elementA, int *elementB) {
  int aux = *elementA;
  *elementA = *elementB;
  *elementB = aux;
}

int getLowestValueIndex(int *array, int arraySize, int startIndex) {
  int lowestValueIndex = startIndex;
  for(int i = startIndex+1; i < arraySize; i++) {
    if(array[i] < array[lowestValueIndex])
      lowestValueIndex = i;
  }
  return lowestValueIndex;
}

int selectSort(int *array, int arraySize) {
  int actualIndex;
  int lowestValueIndex;
  for(int i = 0; i < arraySize; i++) {
    lowestValueIndex = getLowestValueIndex(array, arraySize, i);
    if(array[lowestValueIndex] < array[i])
      swap(&array[lowestValueIndex], &array[i]);
  }
}

int main(int argc, char const *argv[]) {
  int array[] = {23, 432423, 1, 231545, 21335, 534534, 36, 542435, 523452345, 643, 132, 432, 123, 543, 9876, 345, 324, 456, 3456, 523534, 34, 23, 34, 53, 4534, 5, 345, 435, 2, 5, 7, 5, 4546, 5472346, 5, 6534, 54};
  int arraySize = sizeof(array) / sizeof(int);

  selectSort(array, arraySize);  
  printf("Elementos em Ordem:\n");
  for (int i = 0; i < arraySize; i++) {
    printf("e[%i]: %d\n", i, array[i]);
  }

  return 0;
}
