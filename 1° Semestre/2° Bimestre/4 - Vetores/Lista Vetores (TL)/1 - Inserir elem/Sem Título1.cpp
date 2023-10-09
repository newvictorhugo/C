#include <stdio.h>
#define tf 10

main(){
	int vet[tf], tl=0, elem, i;
	
	printf("Insira o elemento %d: ", tl);
	scanf("%d", &elem);
		
	while(elem>0 && tl<tf){
		vet[tl]=elem;
		tl++;
		if(tl<tf){
			printf("Insira o elemento %d: ", tl);
			scanf("%d", &elem);
		}
	}
	for(i=0;i<tl;i++)
		printf("\n%d", vet[i]);
		
}

