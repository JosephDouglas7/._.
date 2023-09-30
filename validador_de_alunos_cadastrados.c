//feito com a ajuda do ChatGPT
#include <stdio.h>
#include <string.h>

// Estrutura para armazenar os dados do aluno
typedef struct {
    char nome[50];
} Aluno;

// Função para validar um aluno
int validaAluno(Aluno alunos[], int total, char* nome) {
    for(int i = 0; i < total; i++) {
        if (strcmp(alunos[i].nome, nome) == 0) {
            return i;
        }
    }
    return -1;
}

int alunos() {
    // Lista de alunos cadastrados
    Aluno alunos[3] = {{"João"}, {"Maria"}, {"Pedro"}};
    
    // Nome do aluno a ser validado
    char* nome = "Maria";
    
    // Chama a função para validar o aluno
    int resultado = validaAluno(alunos, 3, nome);
    
    if (resultado != -1) {
        printf("Aluno %s está cadastrado.\n", alunos[resultado].nome);
    } else {
        printf("Aluno não está cadastrado.\n");
    }

    return 0;
}

