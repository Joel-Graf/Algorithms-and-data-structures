#include <stdio.h>

#include "./util/Util.h"

void selectSort(int *vector);
int getLowestValueIndex(int *vector, int startIndex);

int main(int argc, char const *argv[]) {
  runSortAll(selectSort);
  return 0;
}

void selectSort(int *vector) {
  int lowestValueIndex;
  for (int i = 0; i < VECTOR_SIZE; i++) {
    lowestValueIndex = getLowestValueIndex(vector, i);
    if (vector[lowestValueIndex] < vector[i])
      swap(&vector[lowestValueIndex], &vector[i]);
  }
}

int getLowestValueIndex(int *vector, int startIndex) {
  int lowestValueIndex = startIndex;
  for (int i = startIndex + 1; i < VECTOR_SIZE; i++) {
    if (vector[i] < vector[lowestValueIndex]) lowestValueIndex = i;
  }
  return lowestValueIndex;
}
