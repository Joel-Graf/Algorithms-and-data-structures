#include <stdio.h>

#include "util/util.h"

void bubbleSort(int *vector);

int main(int argc, char const *argv[]) {
  runSortAll(bubbleSort);
  return 0;
}

void bubbleSort(int *vector) {
  for (int i = 0; i < VECTOR_SIZE - 1; i++) {
    for (int j = 0; j < VECTOR_SIZE - 1 - i; j++) {
      if (vector[j] > vector[j + 1]) swap(&vector[j], &vector[j + 1]);
    }
  }
}