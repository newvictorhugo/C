#include<stdio.h>
#include<stdlib.h>

int main(){
	char letra;
	FILE *pont;
	pont = fopen("arquivo.txt", "w");
	if(pont == NULL){
		printf("Erro na abertura");
	}
	do{
		printf("Digite um caractere <espaco finalizar> "); fflush(stdin);
		scanf("%c", &letra);
		if(letra != ' '){// espaço finaliza a leitura
			putc(letra, pont);
		}
		
			
	}while(letra!=' ');
	fclose(pont);
}
