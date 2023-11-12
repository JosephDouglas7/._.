//Feito com a ajuda do Chat bing
#include <stdio.h>
#include<string.h>
// Definindo o tipo abstrato de dados Pagamento
typedef struct {
    float valor; // Valor do pagamento
    char forma[50]; // Forma de pagamento
} Pagamento;

// Definindo o tipo abstrato de dados PagamentosAtuais
typedef struct {
    Pagamento pagamentos[100]; // Lista de pagamentos
    int quantidade; // Quantidade de pagamentos
} PagamentosAtuais;

// Função para inicializar o pagamento
void inicializaPagamento(Pagamento *pagamento, float valor, const char *forma) {
    pagamento->valor = valor;
    strncpy(pagamento->forma, forma, sizeof(pagamento->forma));
}

// Função para inicializar os pagamentos atuais
void inicializaPagamentosAtuais(PagamentosAtuais *pagamentosAtuais) {
    pagamentosAtuais->quantidade = 0;
}

// Função para adicionar um pagamento aos pagamentos atuais
void adicionaPagamento(PagamentosAtuais *pagamentosAtuais, Pagamento pagamento) {
    if (pagamentosAtuais->quantidade < 100) {
        pagamentosAtuais->pagamentos[pagamentosAtuais->quantidade] = pagamento;
        pagamentosAtuais->quantidade++;
    } else {
        printf("Erro: Não é possível adicionar mais pagamentos.\n");
    }
}

// Função para imprimir os pagamentos atuais
void imprimePagamentosAtuais(PagamentosAtuais *pagamentosAtuais) {
    printf("Pagamentos Atuais:\n");
    for (int i = 0; i < pagamentosAtuais->quantidade; i++) {
        printf("Pagamento %d: R$ %.2f via %s\n", i + 1, pagamentosAtuais->pagamentos[i].valor, pagamentosAtuais->pagamentos[i].forma);
    }
}

int pagamento() {
    Pagamento pagamento1;
    inicializaPagamento(&pagamento1, 150.00, "Cartão de Crédito");

    Pagamento pagamento2;
    inicializaPagamento(&pagamento2, 200.00, "Boleto Bancário");

    PagamentosAtuais meus_pagamentos;
    inicializaPagamentosAtuais(&meus_pagamentos);

    adicionaPagamento(&meus_pagamentos, pagamento1);
    adicionaPagamento(&meus_pagamentos, pagamento2);

    imprimePagamentosAtuais(&meus_pagamentos);

    return 0;
}
