#include <stdio.h>
#include <ctype.h>


int esPrimo(int num) {
    int i;
    if (num <= 1) {
        return 0;
    }
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}


int main() {
    int opcion = 1, num, ancho;
                printf("Ingrese el numero: ");
                scanf("%d", &num);
                if (esPrimo(num)) {
                    printf("%d es un numero primo\n", num);
                } else {
                    printf("%d no es un numero primo\n", num);
                }

        }
    

