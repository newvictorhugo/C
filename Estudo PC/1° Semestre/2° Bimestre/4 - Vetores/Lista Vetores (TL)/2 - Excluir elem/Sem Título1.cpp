#include <stdio.h>
#define tf 10

main(){
	int vet[tf], tl=0, elem, i, pos;
	
	printf("---Inserir Elemento---\n");
	printf("Insira o elemento %d: \n", tl);
	scanf("%d", &elem);
		
	while(elem>0 && tl<tf){
		vet[tl]=elem;
		tl++;
		if(tl<tf){
			printf("Insira o elemento %d: \n", tl);
			scanf("%d", &elem);
		}
	}
	for(i=0;i<tl;i++)
		printf("%d=%d\n", i, vet[i]);
		
	printf("---Excluir Elemento---\n");
	printf("Insira a posicao: \n");
	scanf("%d", &pos);
	
	for(i=pos;i<tl;i++)
		vet[i]= vet[i+1];
	tl--;
	
	printf("Vetor:\n");
	for(i=0;i<tl;i++)
	printf("%d=%d\n", i, vet[i]);
		
}

