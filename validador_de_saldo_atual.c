//Esse codigo pode ser aproveitado para linguagem python, linguagem C++
//Feito com a ajuda do Chat bing
#include <stdio.h>

int saldo0() {
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
