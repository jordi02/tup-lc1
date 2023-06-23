#include <stdio.h>
#include <ctype.h>



int signo(float num) {
    if (num > 0) {
        return 1;
    } else if (num == 0) {
        return 0;
    } else {
        return -1;
    }
}


int main() {
    float n;

   
                printf("Ingrese el numero: ");
                scanf("%f", &n);
                printf("El signo de %.2f es %d\n", n, signo(n));
       
    return 0;
}