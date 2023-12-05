#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int menu(){
	int opcao;
	printf("1 - Cadastrar Pedidos\n");
	printf("2 - Listar Pedidos\n");
	printf("0 - Sair\n");
	scanf("%d", &opcao);
	return opcao;
}

typedef struct{
	int numPedido;
	char nomeCliente[100];
}strctCadastrar;

typedef struct{
	int num, CEP;
	char rua[50], bairro[50];
}strctEnder;

typedef struct{
	int hrPedFeito, minPedFeito;
	int hrPedEntr, minPedEntr;
}horario;

typedef struct{
	strctCadastrar a;
	strctEnder b;
	horario c;
}cadastrar;

void cadastrarPedido(cadastrar *d);
void listarPedido(cadastrar *d);

int main(){
	cadastrar d;
	int opcao, cadastrar;
	
	
	do{
		opcao = menu();
		switch(opcao){
			case 1:
				cadastrarPedido(&d);
				break;
				
			case 2:
				listarPedido(&d);
				break;
				
			case 0:
				printf("Programa Finalizado!!!\n");
				break;
				
		}
	}while(opcao != 0);
			
	return 0;
}

void cadastrarPedido(cadastrar *d){
	FILE *pont;
	pont = fopen("arquivo2.bin", "ab");
	if(pont == NULL){
		printf("ERRO AO ABRIR O ARQUIVO!!!");
		exit(1);
	}
	printf("\nNumero do pedido: ");
	scanf("%d", &d->a.numPedido);
	getchar();
	
	printf("Nome do cliente: ");
	fgets(d->a.nomeCliente, sizeof(d->a.nomeCliente), stdin);
	d->a.nomeCliente[strcspn(d->a.nomeCliente, "\n")] = 0;
	
	printf("--Endereco de entrega--\n");
	printf("Rua: ");
	fgets(d->b.rua, sizeof(d->b.rua), stdin);
	d->b.rua[strcspn(d->b.rua, "\n")] = 0;
	
	printf("Numero: ");
    scanf("%d", &d->b.num);
    getchar();

    printf("Bairro: ");
    fgets(d->b.bairro, sizeof(d->b.bairro), stdin);
    d->b.bairro[strcspn(d->b.bairro, "\n")] = 0;

    printf("CEP: ");
    scanf("%d", &d->b.CEP);
    getchar();
    
    printf("--Horario de realizacao do pedido--\n");
    printf("Hora: ");
    scanf("%d", &d->c.hrPedFeito);
    getchar();
    printf("Minuto: ");
    scanf("%d", &d->c.minPedFeito);
    getchar();
    
    printf("--Horario de entrega do pedido--\n");
    printf("Hora: ");
    scanf("%d", &d->c.hrPedEntr);
    getchar();
    printf("Minuto: ");
    scanf("%d", &d->c.minPedEntr);
    getchar();
    
    fwrite(d, sizeof(cadastrar), 1, pont);
	fclose(pont);
}

void listarPedido(cadastrar *d){
	int buscarPedido, encontrado = 0;
	FILE *pont;
	pont = fopen("arquivo2.bin", "rb");
	if(pont == NULL){
		printf("ERRO AO ABRIR O ARQUIVO!!!");
		exit(1);
	}
	printf("\nInsira o numero do pedido: ");
	scanf("%d", &buscarPedido);
	getchar();
	
	while(fread(d, sizeof(cadastrar), 1, pont)){
	 	if(buscarPedido == d->a.numPedido){
	 		printf("Pedido: %d\nCliente: %s\nRua: %s\nNumero: %d\nBairro: %s\nCEP: %d\nPedido Feito: %02d:%02d\nEntrega Estimada: %02d:%02d\n\n", d->a.numPedido, d->a.nomeCliente, d->b.rua, d->b.num, d->b.bairro, d->b.CEP, d->c.hrPedFeito, d->c.minPedFeito, d->c.hrPedEntr, d->c.minPedEntr);
	 		encontrado = 1;
	 		break;
	 	}
	 }
	 if(!encontrado){
	 	printf("Pedido nao encontrado!!!\n");
	 }
	fclose(pont);
}
