#include <stdio.h>

#include "./util/util.h"

void quickSort(int *vector);
int pivotVector(int *vector, int start, int end);
void sort(int *vector, int start, int end);

int main(int argc, char const *argv[]) {
  runSortAll(quickSort);
  return 0;
}

void quickSort(int *vector) { sort(vector, 0, VECTOR_SIZE); }

int pivotVector(int *vector, int start, int end) {
  int pivot = vector[end - 1];
  int lastLowerElemenent = start;
  for (int i = start; i < end - 1; i++) {
    if (vector[i] <= pivot) {
      swap(&vector[i], &vector[lastLowerElemenent]);
      lastLowerElemenent++;
    }
  }
  swap(&vector[end - 1], &vector[lastLowerElemenent]);
  return lastLowerElemenent;
}

void sort(int *vector, int start, int end) {
  int numberOfElements = end - start;
  if (numberOfElements > 1) {
    int pivot = pivotVector(vector, start, end);
    sort(vector, start, pivot);
    sort(vector, pivot + 1, end);
  }
}