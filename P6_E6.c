#include <stdio.h>
#include <ctype.h>


void dibujarTriangulo(char caracter, int anchura) {
    int i, j;
    for (i = 0; i < anchura; i++) {
        for (j = 0; j <= i; j++) {
            printf("%c ", caracter);
        }
        printf("\n");
    }
}

int main() {
    int ancho;
    char  caracter;
  
            
                printf("Ingrese un caracter: ");
                scanf(" %c", &caracter);
                printf("Ingrese la anchura del triangulo: ");
                scanf("%d", &ancho);
                dibujarTriangulo(caracter, ancho);
}