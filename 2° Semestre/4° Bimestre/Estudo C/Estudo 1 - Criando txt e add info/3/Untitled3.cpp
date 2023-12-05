#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
	float preco;
	char desc[100];
	FILE *pont;
	pont = fopen("produto.txt", "a");
	if(pont == NULL){	
		printf("Erro durante abertura");
		return 1;
	}
	printf("Insira a descricao do produto: ");
	fgets(desc, sizeof(desc), stdin);
	printf("Insira o valor do produto: ");
	scanf("%f", &preco);
	fprintf(pont, "%s%5.2f\n", desc, preco);
	
	fclose(pont);
}
