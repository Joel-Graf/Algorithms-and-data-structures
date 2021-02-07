#include <stdio.h>

int linearSearch(int *array, int arraySize, int targetValue) {
  for (int i = 0; i < arraySize; i++) {
    if (array[i] == targetValue)
      return i;
  }

  return -1;
}

int main(int argc, char const *argv[]) {
  int arrayNums[] = {23, 432423, 123, 231545, 21335, 534534, 36, 542435, 523452345, 643, 132, 432, 123, 543, 9876, 345, 324, 456, 3456, 523534, 34, 23, 34, 53, 4534, 5, 345, 435, 2, 5, 7, 5, 4546, 5472346, 5, 6534, 54};
  int sizeOfArrayNums = sizeof(arrayNums) / sizeof(int);

  int targetIndex;
  targetIndex = linearSearch(arrayNums, sizeOfArrayNums, 23);
  printf("Menor número é %d\n", targetIndex);
  targetIndex = linearSearch(arrayNums, sizeOfArrayNums, 54);
  printf("Menor número é %d\n", targetIndex);
  targetIndex = linearSearch(arrayNums, sizeOfArrayNums, 34);
  printf("Menor número é %d\n", targetIndex);

  return 0;
}
