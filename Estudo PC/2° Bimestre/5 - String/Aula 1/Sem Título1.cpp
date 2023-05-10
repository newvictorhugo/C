#include <stdio.h>
#include <string.h>

main(){
	char nome[20], sobrenome[20];
	int retorno;
	
	printf("Digite o NOME: ");
	gets(nome);
	printf("Digite o SOBRENOME: ");
	gets(sobrenome);
	
	//strcpy(sobrenome, nome); //Substitui "sobrenome" por "nome".
	
	
	printf("\n\n Tamanho da string: %d", strlen(nome));
	printf("\n\n String Concatenada: %s", strcat(nome, sobrenome));
	printf("\n\n Conversao p/ maiusculo: %s", strupr(nome, sobrenome));
	printf("\n\n Conversao p/ minusculo: %s", strlwr(nome, sobrenome));
}
