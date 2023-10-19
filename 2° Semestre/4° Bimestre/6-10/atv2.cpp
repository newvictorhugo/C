#include <stdio.h>

main(){
	FILE *pont;
	char nomeArq[30], desc[30];
	float preco;
	int cont=0;
	printf("Nome do arquivo: ");
	scanf("%s", &nomeArq);
	pont=fopen(nomeArq, "r");
	if(pont==NULL){
		printf("Erro ao acessar");
		return 1;
	}
	
	while(fscanf(pont, "%s %f", desc, &preco)==2){
		cont++;
		printf("\n-Produto %d-\n%s\n%5.2f\n", cont, desc, preco);
		if(preco>50){
			printf("O produto custa mais que 50 reais");
		} else{
			printf("O produto nao custa mais que 50 reais");
		}
	}

	fclose(pont);
	return 0;
}
