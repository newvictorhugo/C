#include <stdio.h>
int main(){
	FILE *pont;
	int dia, mes, ano;
	pont=fopen("aniver.txt", "a");
	if(pont==NULL){
		printf("Erro");
		return 1;
	}
	printf("---Insira sua data de nascimento---\n");
	fflush(stdin);
	printf("\nDia: ");
	scanf("%d", &dia);
	printf("\nMes: ");
	scanf("%d", &mes);
	printf("\nAno: ");
	scanf("%d", &ano);
	
	fprintf(pont, "%d/%d/%d\n", dia, mes, ano);
	fclose(pont);
	return 0;
}
