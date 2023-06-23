#include <stdio.h>
#include <ctype.h>


char primera_letra(char cadena[]) {
    return (cadena[0]);
}


int main() {
    int opcion = 1, num, ancho;
    float n;
    char cadena[100], caracter;

            
                printf("Ingrese una cadena de texto: ");
                scanf("%s", cadena);
                printf("La primera letra de %s es %c\n", cadena, primera_letra(cadena));
                
          
    }
    
