#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
	int qntVogais = 0;
	char nome[30], vogais[30], chr;
	FILE *pont;
	pont = fopen("alfa.txt", "a");
	if(pont == NULL){	
		printf("Erro durante abertura");
		return 1;
	}
	
	printf("Digite seu nome: ");
	fgets(nome, sizeof(nome), stdin);

	for(int i=0; nome[i]!= '\0'; i++){
		chr = tolower(nome[i]);
		if(chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u'){
			qntVogais++;
			printf("%c\n", chr);
			fprintf(pont, "%c", chr);
		}
	}
	printf("Quantidade de vogais: %d\n", qntVogais);
	fclose(pont);
	return 0;
}
