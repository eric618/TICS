#include <stdio.h>

// int r(int x) {}

int main(int argc, char* argv[]) {
  // printf("%i\n", f(6543));
  int x = 3456;
  int resto;
  int resultado;
  int suma = 0;
  while (x > 0) {
    resto = x % 10;
    x = x / 10;
    suma *= 10;
    suma += resto;
  }
  printf("%i\n", suma);
  return 0;
}