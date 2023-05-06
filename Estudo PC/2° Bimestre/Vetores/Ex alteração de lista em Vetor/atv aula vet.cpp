#include <stdio.h>
#define tf 10

main(){
	int vet[tf], tl=0, elem, i, pos;
	
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
		vet[i]=vet[i-1];
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
		vet[tl]=elem;
		tl++;
	}
		
	printf("\n----------Excluir Elemento em Determinada Posicao----------\n");
	printf("Entre com a posicao: \n");
	scanf("%d", &pos);
	
	for(i=pos;i<tl-1;i++)
		vet[i]=vet[i+1];
	tl--;
	
	for(i=0;i<tl;i++)
	printf("\n[%d]=%d", i, vet[i]);
}
	
