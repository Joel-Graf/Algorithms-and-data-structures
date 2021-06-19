#include <stdio.h>

#include "util/util.h"

void mergeSort(int *vector);
void merge(int *vector, int start, int middle, int end);
void sort(int *vector, int start, int end);

int main(int argc, char const *argv[]) {
  runSortAll(mergeSort);
  return 0;
}

void mergeSort(int *vector) { sort(vector, 0, VECTOR_SIZE); }

void sort(int *vector, int start, int end) {
  if (end - start > 1) {
    int middle = (start + end) / 2;
    sort(vector, start, middle);
    sort(vector, middle, end);
    merge(vector, start, middle, end);
  }
}

void merge(int *vector, int start, int middle, int end) {
  int tempVector[end - start];
  int tempElement = 0;
  int leftElement = start;
  int rightElement = middle;

  while (leftElement < middle && rightElement < end) {
    if (vector[leftElement] < vector[rightElement]) {
      tempVector[tempElement] = vector[leftElement];
      leftElement++;
      tempElement++;
    } else {
      tempVector[tempElement] = vector[rightElement];
      rightElement++;
      tempElement++;
    }
  }

  while (leftElement < middle) {
    tempVector[tempElement] = vector[leftElement];
    leftElement++;
    tempElement++;
  }
  while (rightElement < end) {
    tempVector[tempElement] = vector[rightElement];
    rightElement++;
    tempElement++;
  }

  for (int i = 0; i < end - start; i++) {
    vector[start + i] = tempVector[i];
  }
}