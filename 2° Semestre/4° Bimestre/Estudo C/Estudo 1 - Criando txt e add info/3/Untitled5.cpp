#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
	int total = 0;
	char nomearq[20];
	FILE *pont;
	printf("Nome do arquivo: ");
	scanf("%s", &nomearq);
	pont = fopen(nomearq,"r");
	if(pont == NULL){	
		printf("Erro durante abertura");
		return 1;
	}
	
	while(getc(pont)!= EOF){
		total++;
	}
	printf("Total de caracteres e: %d", total);
	fclose(pont);
	return 0;
}
