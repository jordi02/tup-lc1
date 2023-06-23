#include <stdio.h>
#include <ctype.h>

int sumaDigitos(int num) {
    int suma = 0;
    while (num != 0) {
        suma += num % 10;
        num /= 10;
    }
    return suma;
}


int main() {
    int opcion = 1, num, ancho;
                printf("Ingrese el numero: ");
                scanf("%d", &num);
                printf("La suma de los digitos de %d es %d\n", num, sumaDigitos(num));

}