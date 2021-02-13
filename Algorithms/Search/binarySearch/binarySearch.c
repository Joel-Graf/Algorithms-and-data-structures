#include <stdio.h>

int binarySearch(int *array, int arraySize, int targetValue) {
  int min = 0;
  int max = arraySize;
  int guess;

  while (max >= min) {
    guess = (max + min) / 2;
    if (array[guess] == targetValue)
      return guess;
    else if (array[guess] < targetValue)
      min = guess;
    else
      max = guess;
  }

  return -1;
}

int main(int argc, char const *argv[]) {


  return 0;
}