#include <stdio.h>

int main(){
	FILE *pont;
	char nomeArq[30];
	int carac=0;
	printf("Nome do arquivo: ");
	scanf("%s", nomeArq);
	pont=fopen(nomeArq,"r");
	if(pont==NULL){
		printf("Erro ao acessar");
		return 1;
	}
	while(getc(pont)!=EOF){
		carac++;
	}
	printf("Quantidade de caracteres existentes sao %d", carac);
	fclose(pont);
	return 0;
}
