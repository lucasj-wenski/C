#include <stdio.h>

int main() {

    int base, expoente;
    int resultado = 1;
    int contador = 0;

    printf("Digite a base: ");
    scanf("%i", &base);

    printf("Digite o expoente (inteiro positivo): ");
    scanf("%i", &expoente);

    do {
        resultado = resultado * base;
        contador++;
    } while (contador < expoente);

    printf("Resultado: %i\n", resultado);

    return 0;
}
