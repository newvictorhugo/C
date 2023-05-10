#include <stdio.h>

main(){
	int dia, pares, maior=0, diaMaior;
	
	for(dia=1; dia<=5; dia++){
		printf("Quantidade vendida no dia %d: ", dia);
		scanf("%d", &pares);
		
		if(pares>maior){
			maior=pares;
			diaMaior=dia;
		}
	}
	printf("No dia %d teve a maior venda do mes, de %d pares", diaMaior, maior);
}
