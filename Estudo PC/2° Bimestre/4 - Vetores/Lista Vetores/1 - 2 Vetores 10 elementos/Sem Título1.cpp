#include <stdio.h>
#define tf 5
#define tfa 5
#define tfb 10
main(){
	int vet[tf], vet2[tfa], vet3[tfb], i, ia, ib, j;
	
	for(i=0;i<tf;i++){
		printf("Informe o numero [%d]: ", i);
		scanf("%d", &vet[i]);
	}
	for(i=0;i<tfa;i++){
		printf("Informe o numero [%d]: ", i);
		scanf("%d", &vet2[i]);
	}
	j=0;
	for(ib=0;ib<tfb;ib++){
		vet3[j]=vet[ib];
		j++;
		vet3[j]=vet2[ib];
		j++;
	}
	//Exibicao do vetor
	for(i=0;i<tfb;i++){
		printf("vetor[%d]: %d\n", i, vet3[i]);
	}
	return 0;
}

