#include <stdio.h>

// Validação de Nota Acadêmica
int main() {

    int nota;

    do {
        printf("Digite sua nota acadêmica (0 a 100): ");
        scanf("%d", &nota);

        if (nota < 0 || nota > 100) {
            printf("Nota inválida! Digite novamente.\n");
        }

    } while (nota < 0 || nota > 100);

    if (nota >= 60) {
        printf("Aprovado!\n");
    } else {
        printf("Reprovado!\n");
    }

    return 0;
}
