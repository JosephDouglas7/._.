#include <stdio.h>

// Definindo o tipo abstrato de dados Saldo
typedef struct {
    float valor; // Valor do saldo
} Saldo;

// Função para inicializar o saldo
void inicializaSaldo(Saldo *saldo, float valor) {
    saldo->valor = valor;
}

// Função para imprimir o saldo
void imprimeSaldo(Saldo *saldo) {
    printf("Saldo Atual: R$ %.2f\n", saldo->valor);
}

int saldo() {
    Saldo meu_saldo;
    inicializaSaldo(&meu_saldo, 1000.00);
    imprimeSaldo(&meu_saldo);
    return 0;
}
