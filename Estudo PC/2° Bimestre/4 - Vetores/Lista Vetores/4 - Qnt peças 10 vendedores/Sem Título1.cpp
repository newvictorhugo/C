#include <stdio.h>
#define tf 4
#define tf2 4

main(){
	int vet[tf], vet2[tf2], i, qntpcs=0, totalvenda;
	
	for(i=1;i<tf;i++){
		printf("Informe a quantidade de pecas vendidas pelo vendedor %d: \n", i);
		scanf("%d", &vet[i]);
		printf("Informe o valor unitario de cada peca vendida pelo vendedor %d: \n", i);
		scanf("%d", &vet2[i]);
		
		totalvenda = vet[i]*vet2[i];
		printf("Valor total da venda e: %d\n\n", totalvenda);
	}
	for(i=1;i<tf;i++){
		qntpcs+=vet[i];
	}
	printf("O quantidade total de pecas vendidas por todos vendedores e: %d", qntpcs);
}
