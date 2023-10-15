#include <stdio.h>
#include <string.h>

//Feito com a ajuda do chat GPT
// Definindo o tipo abstrato de dados Nome
typedef struct {
    char texto[100]; // Considerando que o nome terá no máximo 100 caracteres
} Nome;

// Função para inicializar o nome
void inicializaNome(Nome *nome, const char *texto) {
    strncpy(nome->texto, texto, sizeof(nome->texto));
}

// Função para imprimir o nome
void imprimeNome(Nome *nome) {
    printf("Nome: %s\n", nome->texto);
}

int nome() {
    Nome meu_nome;
    inicializaNome(&meu_nome, "Seu Nome");
    imprimeNome(&meu_nome);
    return 0;
}
