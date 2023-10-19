#include<stdio.h>
main(){
	FILE *pont;
	char desc[30];
	float preco;
	pont=fopen("texte.txt", "a");
	if(pont==NULL){
		printf("Erro no arquivo");
		return 1;
	}
	printf("\nDescricao do produto: ");
	fgets(desc, sizeof(desc), stdin);
	printf("Preco do produto: ");
	scanf("%f", &preco);
	fprintf(pont, "\n%s%5.2f", desc, preco);
	fclose(pont);
	return 0;
}
