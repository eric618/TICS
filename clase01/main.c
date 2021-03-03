#include <stdio.h>

int main(int argc, char **argv) {
  int x = 5;
  int y;
  char c[] = "Xasd";
  char nombre[20];
  char aux[];

  printf("%i %i\n", x, x);
  printf("%s\n", c);
  printf("Hola!\n");
  scanf("%i", &y);
  printf("El valor ingresado fue %i", y);
  scanf("%s", nombre);
  printf("El valor ingresado fue %s", nombre);

    return 0;
}