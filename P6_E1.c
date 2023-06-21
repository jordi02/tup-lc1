#include <stdio.h>
#include <stdlib.h>

float cubo(float num1);

void main()  
{
    float num;

    printf("Ingrese un n%cmero para calcular su cubo: \n", 163);
    scanf("%f", &num);
    system("pause");
    printf("El resultado es: %.2f\n", cubo(num));
    system("pause");

}

float cubo(float num1)
{
    float resultado = 0;
    resultado = num1 * num1 * num1;
    return resultado;
}