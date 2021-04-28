#include <stdio.h>
#include <stdlib.h>

typedef struct p {
  int dato;
  struct p* siguiente;
} nodo;

int main(int argc, char* argv[]) {
  nodo* prev = malloc(sizeof(nodo));
  ;
  nodo* sgte;

  for (int i = 10; i < 20; i++) {
    prev->dato = i;
    sgte = malloc(sizeof(nodo));
    prev->siguiente = sgte;
    sgte->siguiente = NULL;
  }

  printf("%i\n", sgte->dato);

  printf("holamundo!\n");
  return 0;
}