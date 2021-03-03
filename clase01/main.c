#include <stdio.h>

int main(int argc, char **argv) {
  int x = 5;
  int y;
  char c[] = "Xasd";
  printf("%i %i\n", x, x);
  printf("%s\n", c);
  printf("Hola!\n");
  scanf("%i", &y);
  printf("El valor ingresado fue %i", y);
  return 0;
}