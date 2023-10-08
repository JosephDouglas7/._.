//Esse codigo pode ser aproveitado para linguagem python, linguagem C++
//Feito com a ajuda do ChatGPT
#include <stdio.h>
#include <string.h>

int validaCPF(char *cpf) {
    int i, j, digito10 = 0, digito11 = 0;

    if(strlen(cpf) != 11)
        return 0;

    // Verifica se todos os dígitos são iguais
    int todosIguais = 1;
    for(i = 1; i < strlen(cpf); i++) {
        if(cpf[i] != cpf[0]) {
            todosIguais = 0;
            break;
        }
    }
    if(todosIguais)
        return 0;

    for(i = 0, j = 10; i < strlen(cpf)-2; i++, j--)
        digito10 += (cpf[i]-48) * j;
    digito10 %= 11;
    if(digito10 < 2)
        digito10 = 0;
    else
        digito10 = 11 - digito10;

    if((cpf[9]-48) != digito10)
        return 0;

    for(i = 0, j = 11; i < strlen(cpf)-1; i++, j--)
        digito11 += (cpf[i]-48) * j;
    digito11 %= 11;
    if(digito11 < 2)
        digito11 = 0;
    else
        digito11 = 11 - digito11;

    if((cpf[10]-48) != digito11)
        return 0;

    return 1;
}

int main() {
    char cpf[12];
    printf("Digite o CPF: ");
    scanf("%s", cpf);

    if(validaCPF(cpf))
        printf("CPF válido.\n");
    else
        printf("CPF inválido.\n");

    return 0;
}
