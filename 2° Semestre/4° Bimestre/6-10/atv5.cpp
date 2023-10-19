#include<stdio.h>
main(){
	FILE *pont;
	char nomearq[30];
	int dia, mes, ano, cont =0;
	printf("\nNome do arquivo: ");
	scanf("%s", &nomearq);
	pont=fopen(nomearq, "r");
	if(pont==NULL){
		printf("Erro ao acessar");
		return 1;
	}
	while(fscanf(pont, "%d/%d/%d", &dia, &mes, &ano)==3){
		cont++;
		printf("\n--Aniversario %d--\n", cont);
		if(mes == 8){
			printf("%d/%d/%d\n", dia, mes, ano);
			printf("Faz aniversario em Outubro\n");
		}else{
			printf("%d/%d/%d\n", dia, mes, ano);
			printf("Nao faz aniversario em Outubro\n");
		}
	}
	
	fclose(pont);
	return 0;
}
