//Deixei dessa maneira porque estava dando muito erro que eu não conseguia concertar 
//#include <stdio.h>
//#include <string.h>

//void le_nome(char*);
//void cadastrar_aluno(void);
//void le_nasc(char*);

//int main(void) {
  //cadastrar_aluno();
  //return 0;
//}

//void cadastrar_aluno(void) {
  //char nome[51];
  //char nasc[11];
  
  //printf("Cadastrar_alunos\n");
  //le_nome(nome);
  //le_nasc(nasc);
  
  //printf("Nome: %s\n", nome);
  //printf("Data de nascimento: %s\n", nasc);
//}

 //void le_nome(char* nome) {
    //printf("Nome do aluno: ");
    //fgets(nome, 51, stdin);
  //while (!valida_nome(nome)) {
    //printf("Caracteres inválidos\n");
    //printf("Informe o nome novamente\n\n");
    //printf("Nome do aluno: ");
    //fgets(nome, 51, stdin);
  //} 
//}

//void le_nasc(char* nasc) {
  //int dia, mes, ano;
  //char dd[3], mm[3], aa[5];
  
  //printf("Data de nascimento: ");
  //fgets(nasc, 11, stdin);
  
  //strncpy(dd, &nasc[0], 2);
  //sscanf(dd, "%d", &dia);
  
  //strncpy(mm, &nasc[3], 2);
  //sscanf(mm, "%d", &mes);

  //strncpy(aa, &nasc[6], 4);
  //sscanf(aa, "%d", &ano);

  //while (!valida_data(dia, mes, ano)) {
    //printf("Data inválida: %d/%d/%d\n", dia, mes, ano);
    //printf("Informe uma nova data\n\n");
    //printf("Data de nascimento: ");
    //fgets(nasc, 11, stdin);
    //strncpy(dd, &nasc[0], 2);
    //sscanf(dd, "%d", &dia);
    //strncpy(mm, &nasc[3], 2);
    //sscanf(mm, "%d", &mes);
    //strncpy(aa, &nasc[6], 4);
    //sscanf(aa, "%d", &ano);
  //} 
//}
