#include <stdio.h>
#define tf 10

main(){
	int vet[tf], tl=0, elem, i, pos, cont;
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
		
	printf("\n----------Buscar Elemento em Determinada Posicao----------\n");
	do{
		printf("Digite o elemento a ser procurado: \n");
		scanf("%d", &elem);
		pos=0;
		cont=0;
		while(elem!=vet[pos] && pos<tl)
			pos++; //pesquisando
	
		if(pos<tl){//achou
			printf("Elemento %d encontrado na posicao: ", elem);
			for(i=0;i<tf;i++){
				if(vet[i]==elem){
					printf("%d ", i);
					cont++;
				}
		}
			printf("\nElemento aparece %d vezes\n\n", cont);
		}
		else if(elem!=0){
			printf("Elemento %d nao existe, deseja adiciona-lo a posicao %d? Y or N\n", elem, pos);
			fflush(stdin);
			scanf("%c", &confirm);
			
			if(confirm=='Y' || confirm=='y'){
				vet[tl]=elem;
				tl++;
				printf("Elemento %d adicionado na posicao %d \n\n", elem, pos);
			}
			else
				printf("Elemento %d nao adicionado\n\n", elem);
				
		}
	}while(elem!=0);
	return 0;
}

