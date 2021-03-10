#include <stdio.h>

int main(int argc, char **argv)
{
    int x = 123;
    int *puntero = &x;

    printf("Valor: %i \nDirección: %p\n", x, &x);
    printf("\nValor puntero: %p \nDirección puntero: %p\nContenido apuntado: %i\n", puntero, &puntero, *puntero);

    return 0;
}