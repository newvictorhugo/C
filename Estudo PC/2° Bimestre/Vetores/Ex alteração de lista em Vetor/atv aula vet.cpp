#include <stdio.h>
#include <ctype.h>
#define tf 10

main(){
	int vet[tf], tl=0, elem, i, pos;
	char confirm;
	
	printf("\n----------Inserir----------\n");
	printf("Entre com o elemento: %d\n", tl);
	scanf("%d", &elem);
	
	while(elem>0 && tl<tf){
		vet[tl]=elem;
		tl++;
		if(tl<tf){
			printf("Entre com o elemento: %d\n", tl);
			scanf("%d", &elem);
		}
	}
	
	printf("\n----------Inserir Elemento em Determinada Posicao----------\n");
	printf("Entre com o elemento: \n");
	scanf("%d", &elem);
	printf("Entre com a posicao: \n");
	scanf("%d", &pos);
	
	for(i=tl;i<pos;i++)
		vet[i]=vet[i];
	vet[pos]=elem;
	tl++;
	
	for(i=0;i<tl;i++)
		printf("\n[%d]=%d", i, vet[i]);
		
	printf("\n----------Buscar Elemento em Determinada Posicao----------\n");
	printf("Digite o elemento a ser procurado: \n");
	scanf("%d", &elem);
	pos=0;
	while(elem!=vet[pos] && pos<tl)
		pos++; //pesquisando
	
	if(pos<tl)//achou
		printf("Elemento %d encontrado na posicao %d \n", elem, pos);
		
	else{
		printf("Elemento %d nao existe, deseja adiciona-lo a posicao %d? Y or N\n", elem, pos);
		fflush(stdin);
		scanf("%c", &confirm);
		
		if(confirm=='Y' || confirm=='y'){
			vet[tl]=elem;
			tl++;
			printf("Elemento %d adicionado na posicao %d \n", elem, pos);
		}
		else
			printf("Elemento nao adicionado");
	}
		
	printf("\n----------Excluir Elemento em Determinada Posicao----------\n");
	printf("Entre com a posicao: \n");
	scanf("%d", &pos);
	
	for(i=pos;i<tl;i++)
		vet[i]=vet[i+1];
	tl--;
	
	for(i=0;i<tl;i++)
	printf("\n[%d]=%d", i, vet[i]);
	
	return 0;
}

