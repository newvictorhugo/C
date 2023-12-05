#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define qnt 100

typedef struct{
	int dia, mes, ano;
}datanasc;

typedef struct{
	datanasc a;
	int CPF, tel;
	char nome[100], email[100];
}info;

int main(){
	info b;
	int i = 0;
	char continuar;
	FILE *pont;
	pont = fopen("arquivo.txt","a");
	if(pont == NULL){	
		printf("Erro durante abertura");
		return 1;
	}
	do{
		i++;
		printf("Cliente %d\n", i);
		printf("Insira o nome: ");
		fgets(b.nome, sizeof(b.nome), stdin); 
		b.nome[strcspn(b.nome, "\n")] = 0;
		
		printf("Data de nascimento(dd/mm/aaaa): ");
		scanf("%d/%d/%d", &b.a.dia, &b.a.mes, &b.a.ano);
		while(getchar() != '\n');
		
		printf("CPF: ");
		scanf("%d", &b.CPF);
		while(getchar() != '\n');
		
		printf("E-mail: ");
		fgets(b.email, sizeof(b.email), stdin); fflush(stdin);
		b.email[strcspn(b.email, "\n")] = 0;
		
		printf("Telefone: ");
		scanf("%d", &b.tel);
		while(getchar() != '\n');
		
		printf("Continuar?(s/n): ");
		scanf("%c", &continuar);
		while(getchar() != '\n');
		fprintf(pont, "Nome: %s\nData de Nascimento: %02d/%02d/%04d\nCPF: %d\nE-mail: %s\nTelefone: %d\n\n", 
                b.nome, b.a.dia, b.a.mes, b.a.ano, b.CPF, b.email, b.tel);
	}while(continuar != 'n');
	fclose(pont);
	return 0;
}
