//Feito com a ajuda do Chat bing
#include <stdio.h>
#include <string.h>

// Definindo o tipo abstrato de dados CPF
typedef struct {
    char numero[12]; // 11 dígitos do CPF + 1 para o caractere nulo '\0'
} CPF;

// Função para inicializar o CPF
void inicializaCPF(CPF *cpf, const char *numero) {
    strncpy(cpf->numero, numero, sizeof(cpf->numero));
}

// Função para imprimir o CPF
void imprimeCPF(CPF *cpf) {
    printf("CPF: %s\n", cpf->numero);
}

int cpf() {
    CPF meu_cpf;
    inicializaCPF(&meu_cpf, "12345678901");
    imprimeCPF(&meu_cpf);
    return 0;
}

