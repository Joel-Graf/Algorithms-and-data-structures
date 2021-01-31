#include <stdio.h>

void intercalar(int *arrayA, int sizeArrayA, int *arrayB, int sizeArrayB, int *resultArray) {
  int counterArrayA = 0;
  int counterArrayB = 0;
  int counterResult = 0;
    
  while (counterArrayA < sizeArrayA && counterArrayB < sizeArrayB) {
    if (arrayA[counterArrayA] < arrayB[counterArrayB]) {
      resultArray[counterResult] = arrayA[counterArrayA];
      counterArrayA++;
      counterResult++;
    } else {
      resultArray[counterResult] = arrayB[counterArrayB];
      counterArrayB++;
      counterResult++;
    }
  }

  while (counterArrayA < sizeArrayA) {
    resultArray[counterResult] = arrayA[counterArrayA];
    counterArrayA++;
    counterResult++;
  }
  while (counterArrayB < sizeArrayB) {
    resultArray[counterResult] = arrayB[counterArrayB];
    counterArrayB++;
    counterResult++;
  }
}

int main(int argc, char const *argv[]) {
  int arrayA[] = {2, 3, 4, 5, 7, 9, 11};
  int arrayB[] = {1, 2, 3, 6, 8, 10, 12};
  int sizeArrayA = sizeof(arrayA) / sizeof(int);
  int sizeArrayB = sizeof(arrayB) / sizeof(int);
  int resultArray[sizeArrayA + sizeArrayB];

  intercalar(arrayA, sizeArrayA, arrayB, sizeArrayB, resultArray);
  printf("Elementos em Ordem:\n");
  for (int i = 0; i < 14; i++) {
    printf("e[%i]: %d\n", i, resultArray[i]);
  }

  return 0;
}
