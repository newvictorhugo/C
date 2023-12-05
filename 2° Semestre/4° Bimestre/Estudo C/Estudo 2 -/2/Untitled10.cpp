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
	int encontrado = 0;
	char srcNome[100];
	FILE *pont;
	pont = fopen("arquivo.txt", "r");
	if(pont == NULL){
		printf("ERRO AO ABRIR O ARQUIVO!!!");
		return 1;
	}
	
	printf("Nome do palestrante: ");
	fgets(srcNome, sizeof(srcNome), stdin);
	srcNome[strcspn(srcNome, "\n")] = 0;
	
	while(fscanf(pont, "Codigo: %d\nPalestrante: %99[^\n]\nPalestra: %99[^\n]\nLocal: %99[^\n]\nData: %02d/%02d/%04d\nNome: %99[^\n]\nProfissao: %99[^\n]\nHabilidades: %99[^\n]\n\n",
        &c.cod, c.palestrante, c.nomePalestra, c.local,
        &c.a.dia, &c.a.mes, &c.a.ano, c.b.nome, c.b.profissao, c.b.habilidades) != EOF){
        	if(strcmp(c.palestrante, srcNome)==0){
        		printf("Nome: %s\nProfissao: %s\nHabilidades: %s", c.b.nome, c.b.profissao, c.b.habilidades);
        		encontrado = 1;
        		break;
        	}
        }
        if (!encontrado) {
        	printf("Palestrante nao encontrado!!!\n");
    	}
	
	fclose(pont);
	return 0;
	
}
