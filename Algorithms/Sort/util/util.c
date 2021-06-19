#include "util.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

unsigned int QTD_COMPARISIONS = 0;
unsigned int QTD_SWAPS = 0;
unsigned int TIME_INITIAL = 0;
unsigned int TIME_FINAL = 0;

void runSortAll(void (*sortFunction)(int *vector)) {
  runSort(sortFunction, 1);
  runSort(sortFunction, 2);
  runSort(sortFunction, 3);
};

void runSort(void (*sortFunction)(int *vector), int vectorType) {
  int vector[VECTOR_SIZE];
  populateVector(vector, vectorType);
  startTimer();
  sortFunction(vector);
  stopTimer();
  printTimer();
  testVectorOrder(vector);
}

void startTimer() { TIME_INITIAL = clock(); }

void stopTimer() { TIME_FINAL = clock(); }

void printTimer() {
  printf("Sort execution time: %ums\n", TIME_FINAL - TIME_INITIAL);
}

void populateVector(int *vector, int vectorType) {
  int i;
  switch (vectorType) {
    // Ordered
    case 1:
      printf("\n1___Creating Ordered Vector___1\n");
      for (i = 0; i < VECTOR_SIZE; i++) {
        vector[i] = i + 1;
      }
      break;
    // Inverse Ordered
    case 2:
      printf("2___Creating Inverse Ordered Vector___2\n");
      for (i = 0; i < VECTOR_SIZE; i++) {
        vector[i] = VECTOR_SIZE - i;
      }
      break;
    // Random Ordered
    case 3:
      printf("3___Creating Random Ordered Vector___3\n");
      for (i = 0; i < VECTOR_SIZE; i++) {
        vector[i] = (int)(rand() % VECTOR_SIZE);
      }
      break;
    default:
      printf("Error: Invalid vector type!");
  }
}

void printVector(int *vector) {
  int i;
  for (i = 0; i < VECTOR_SIZE; i++) {
    printf("%i, ", vector[i]);
    if ((i + 1) % 14 == 0) {
      printf("\n");
    }
  }
}

void testVectorOrder(int *vector) {
  int i;
  for (i = 1; i < VECTOR_SIZE; i++) {
    if (vector[i - 1] > vector[i]) {
      printf("( ) - Vector is NOT Ordered! :C\n\n");
      return;
    }
  }
  printf("(X) - Vector is Ordered! :D\n\n");
  return;
}

void swap(int *elementA, int *elementB) {
  int aux = *elementA;
  *elementA = *elementB;
  *elementB = aux;
}