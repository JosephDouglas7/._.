#include <string.h> 
#include<stdio.h>
#include "util.h"
struct estudante{ 
 long int matricula; 
 char nome[500]; 
 char nasc[10]; 
 char email[500];
}; 
void preenchealuno(struct estudante*); 
void exibealuno(struct estudante);  

int cadastrar(void) {
 estudante fulano;
 printf("\nCadastro de estudantes");
 preenchealuno(&fulano);
 exibealuno(fulano);
 return 0;
}
void preenchealuno(struct estudante * al) {
 printf("informe o nome do estudante:");
 printf("informe o CPF do aluno:");
 printf("informe a data de nascimento do aluno:"); 
 printf("informe o email do aluno:");  
 return; 
} 
void exibealuno(const estudante al){ 
 printf("nome:%s\n",al.nome); 
 printf("email:%s\n", al.email); 
 printf("data de nascimento do aluno: %s\n",al.nasc);
 return; 
}
