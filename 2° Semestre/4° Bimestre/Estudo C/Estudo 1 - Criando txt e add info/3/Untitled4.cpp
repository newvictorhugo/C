#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
	char desc[100], nomearq[20];
	float preco;
	FILE *pont;
	printf("Nome do arquivo: ");
	scanf("%s", &nomearq);
	pont = fopen(nomearq,"r");
	if(pont == NULL){	
		printf("Erro durante abertura");
		return 1;
	}
	
	while(fscanf(pont, "%s %f", desc, &preco)!= EOF){
		if(preco>50){
			printf("O produto %s custa mais que 50 reais\n", desc);
		}else{
			printf("O produto %s nao custa mais que 50 reais\n", desc);
		}
	}
	fclose(pont);
	return 0;
}
