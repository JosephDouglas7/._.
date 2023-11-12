//Feito com a ajuda do Chat bing
#include <stdio.h>
#include<string.h>
// Definindo o tipo abstrato de dados Pagamento
typedef struct {
    float valor; // Valor do pagamento
    char forma[50]; // Forma de pagamento
} Pagamento;

// Função para inicializar o pagamento
void inicializaPagamento(Pagamento *pagamento, float valor, const char *forma) {
    pagamento->valor = valor;
    strncpy(pagamento->forma, forma, sizeof(pagamento->forma));
}

// Função para imprimir o pagamento
void imprimePagamento(Pagamento *pagamento) {
    printf("Pagamento: R$ %.2f via %s\n", pagamento->valor, pagamento->forma);
}

int pagamento() {
    Pagamento meu_pagamento;
    inicializaPagamento(&meu_pagamento, 150.00, "Cartão de Crédito");
    imprimePagamento(&meu_pagamento);
    return 0;
}
