	#include <stdio.h>

main(){
	FILE *pont;
	char nome[30];
	int idade, cont;
	float salario;
	pont = fopen("arquivopessoa.txt", "w");
	if(pont==NULL){
		printf("Erro no arquivo");
	}
	for(cont = 0; cont<2;cont++){
		printf("Digite o nome: ");
		fgets(nome, sizeof(nome), stdin);
		printf("Digite a idade: ");
		scanf("%d", &idade);
		printf("Digite o salario: ");
		scanf("%f", &salario);
		fprintf(pont, "%s %d %5.2f\n", nome, idade, salario);
		fflush(stdin);
	}
	fclose(pont);
}
