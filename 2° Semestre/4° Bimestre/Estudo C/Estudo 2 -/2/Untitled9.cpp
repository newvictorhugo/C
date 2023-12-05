#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct{
	int dia, mes, ano;
}data;

typedef struct{
	char nome[100], profissao[100], habilidades[100];
}minicurriculo;

typedef struct{
	data a;
	minicurriculo b;
	int cod;
	char palestrante[100], nomePalestra[100], local[100];
}info;

int main(){
	info c;
	
	FILE *pont;
	pont = fopen("arquivo.txt", "a");
	if(pont == NULL){
		printf("ERRO AO ABRIR O ARQUIVO!!!");
		return 1;
	}
	printf("Codigo: ");
	scanf("%d", &c.cod);
	while(getchar() != '\n');
	
	printf("Nome do palestrante: ");
	fgets(c.palestrante, sizeof(c.palestrante), stdin);
	c.palestrante[strcspn(c.palestrante, "\n")] = 0;
	
	printf("Nome da palestra: ");
	fgets(c.nomePalestra, sizeof(c.nomePalestra), stdin);
	c.nomePalestra[strcspn(c.nomePalestra, "\n")] = 0;
	
	printf("Local: ");
	fgets(c.local, sizeof(c.local), stdin);
	c.local[strcspn(c.local, "\n")] = 0;
	
	printf("Data: ");
	scanf("%d/%d/%d", &c.a.dia, &c.a.mes, &c.a.ano);
	while(getchar() != '\n');
	
	printf("--Minicurriculo--\n");
	printf("Nome Completo: ");
	fgets(c.b.nome, sizeof(c.b.nome), stdin);
	c.b.nome[strcspn(c.b.nome, "\n")] = 0;
	
	printf("Profissao: ");
	fgets(c.b.profissao, sizeof(c.b.profissao), stdin);
	c.b.profissao[strcspn(c.b.profissao, "\n")] = 0;
	
	printf("Habilidades: ");
	fgets(c.b.habilidades, sizeof(c.b.habilidades), stdin);
	c.b.habilidades[strcspn(c.b.habilidades, "\n")] = 0;
	
	fprintf(pont, "Codigo: %d\nPalestrante: %s\nPalestra: %s\nLocal: %s\nData: %02d/%02d/%04d\nNome: %s\nProfissao: %s\nHabilidades: %s\n\n",
        c.cod, c.palestrante, c.nomePalestra, c.local,
        c.a.dia, c.a.mes, c.a.ano, c.b.nome, c.b.profissao, c.b.habilidades);
	
	fclose(pont);
	return 0;
	
}
