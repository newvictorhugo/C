#include <stdio.h>
#define tf 10
#define tf2 10
main(){
	int vet[tf], i, resto, contpar, contimpar;
	
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
}

