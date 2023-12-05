#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
	int total = 0;
	FILE *pont;
	pont = fopen("alfa.txt", "r");
	if(pont == NULL){	
		printf("Erro durante abertura");
		return 1;
	}
	while(getc(pont)!= EOF){
		total++;
	}
	printf("Quantidade de vogais presente no arquivo e: %d", total);
	fclose(pont);
}
