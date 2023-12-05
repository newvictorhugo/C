#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define qnt 100

typedef struct {
    int dia, mes, ano;
} datanasc;

typedef struct {
    datanasc a;
    int CPF, tel;
    char nome[100], email[100];
} info;

int main() {
    info b;
    int CPFdeBusca, encontrado = 0;
    FILE *pont;
    pont = fopen("arquivo.txt", "r");
    if (pont == NULL) { 
        printf("Erro durante a abertura do arquivo\n");
        return 1;
    }

    printf("CPF do Cliente: ");
    scanf("%d", &CPFdeBusca);
    while (fscanf(pont, "Nome: %99[^\n]\nData de Nascimento: %d/%d/%d\nCPF: %d\nE-mail: %99[^\n]\nTelefone: %d\n\n", b.nome, &b.a.dia, &b.a.mes, &b.a.ano, &b.CPF, b.email, &b.tel) != EOF) {
        if (CPFdeBusca == b.CPF) {
            printf("Nome: %s\nData de Nascimento: %02d/%02d/%04d\nCPF: %d\nE-mail: %s\nTelefone: %d\n\n", b.nome, b.a.dia, b.a.mes, b.a.ano, b.CPF, b.email, b.tel);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("CPF nao encontrado!!!\n");
    }

    fclose(pont);
    return 0;  
}

