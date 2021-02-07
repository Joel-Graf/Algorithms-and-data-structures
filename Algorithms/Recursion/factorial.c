#include <stdio.h>

int factorial(int n) {
  if (n <= 1)
    return 1;
  else
    return n * factorial(n - 1);
}

int main(int argc, char const *argv[]) {
  printf("10!: %d\n", factorial(10));
  printf("5!: %d\n", factorial(5));
  printf("1!: %d\n", factorial(1));
  printf("-3!: %d\n", factorial(-3));

  return 0;
}
