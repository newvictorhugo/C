#include<stdio.h>

main(){
	FILE *arq;
	int cont = 0;
	arq=fopen("alfa.txt", "r");
	if(arq==NULL){
		printf("Erro no arquivo");
	}
	while(getc(arq)!=EOF){
		cont++;
	}
	printf("A quantidade de vogais no arquivo e: %d", cont);
	fclose(arq);
}
