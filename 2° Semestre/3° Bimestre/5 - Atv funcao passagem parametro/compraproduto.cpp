#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX_CHAR 50

struct compra{
	int codigo;
	char descricao[MAX_CHAR];
	float preco;
};

void menuCampos(struct compra *b){
	printf("\n- Compra de produto -\n");
	printf("\nCodigo do produto: ");
	scanf("%d", &b->codigo);
	fflush(stdin);
	printf("\nDescricao do produto: ");
	fgets(b->descricao, sizeof(b->descricao), stdin);
	printf("\nPreco do produto: ");
	scanf("%f", &b->preco);
	fflush(stdin);
	
}

int formPagamento(){
	int opcoes;
	do{
		printf("\n- Forma de pagamento - ");
		printf("\n1 - A vista");
		printf("\n2 - A prazo\n");
		fflush(stdin);
		scanf("%d", &opcoes);
		if(opcoes!=1&&opcoes!=2){
			printf("\n- Opcao invalida -");
		}
	}while(opcoes!=1&&opcoes!=2);
	
	return opcoes;
}

float calcularPreco(struct compra b, int opcoes){
	float novoPreco = 0;
	
	switch(opcoes){
		case 1:
			printf("\n- A vista -");
			novoPreco = (b.preco/10)*9;
			break;
		case 2:
			printf("\n- A prazo -");
			novoPreco = (b.preco/10)*11;
	}
	return novoPreco;
}

int main(){
	struct compra b;
	int opcoes;
	float novoPreco;
	char continuar;
	
	do{
		menuCampos(&b);
		
		opcoes = formPagamento();
		novoPreco = calcularPreco(b, opcoes);
		printf("\nPreco a pagar: %5.2f", novoPreco);
		
		
		printf("\n\nContinuar?(S/N): ");
		fflush(stdin);
		scanf("%c", &continuar);
		continuar = toupper(continuar);
		if(continuar!='S'&& continuar!='N'){
			do{
				printf("\n- Valor invalido -");
				printf("\nContinuar?(S/N): ");
				fflush(stdin);
				scanf("%c", &continuar);
				continuar = toupper(continuar);
			}while(continuar!='S'&& continuar!='N');
		}
		
	}while(continuar!='N');
	
	return 0;
}
