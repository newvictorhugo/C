#include <stdio.h>
#define tf 6
#define tf2 6
main(){
	int vet[tf], i, resto, contpar=0, contimpar=0;
	
	for(i=0;i<tf;i++){
		printf("Informe o numero [%d]: ", i);
		scanf("%d", &vet[i]);
	}
	for(i=0;i<tf;i++){
		resto=vet[i]%2;
		if(resto==0) //par
			contpar++;
		else
			contimpar++;
	}
	//Exibicao do vetor
	for(i=0;i<tf;i++){
		printf("vetor[%d]: %d\n", i, vet[i]);
	}
	printf("O quantidade de num pares: %d\n", contpar);
	printf("O quantidade de num impares: %d\n", contimpar);
	
	
}

