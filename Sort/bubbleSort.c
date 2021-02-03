#include <stdio.h>

void swap(int *elementA, int *elementB) {
  int aux = *elementA;
  *elementA = *elementB;
  *elementB = aux;
}

void bubbleSort(int *array, int arraySize) {
  for (int i = 0; i < arraySize - 1; i++) {
    for (int j = 0; j < arraySize - 1 - i; j++) {
      if (array[j] > array[j + 1])
        swap(&array[j], &array[j + 1]);
    }
  }
}

int main(int argc, char const *argv[]) {
  int array[] = {23, 432423, 123, 231545, 21335, 534534, 36, 542435, 523452345, 643, 132, 432, 123, 543, 9876, 345, 324, 456, 3456, 523534, 34, 23, 34, 53, 4534, 5, 345, 435, 2, 5, 7, 5, 4546, 3, 5, 6534, 54};
  int arraySize = sizeof(array) / sizeof(int);

  bubbleSort(array, arraySize);
  printf("Elementos em Ordem:\n");
  for (int i = 0; i < arraySize; i++) {
    printf("e[%i]: %d\n", i, array[i]);
  }

  return 0;
}
