#include <stdio.h>

int saldo() {
    double saldo;

    printf("Insira o saldo atual: ");
    scanf("%lf", &saldo);

    if (saldo > 0) {
        printf("Seu saldo é positivo.\n");
    } else if (saldo < 0) {
        printf("Seu saldo é negativo.\n");
    } else {
        printf("Seu saldo é zero.\n");
    }

    return 0;
}

