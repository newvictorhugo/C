#include <stdio.h>

main(){
	int contador=0, num, maior=0, menor=9999;
	
	printf("Digite o valor: ");
		scanf("%d", &num);
	
	while(num!=0){
		
		
		
		if(num>0){
			if(num>maior)
				maior = num;
				
			if(num<menor)
				menor = num;
		}
		
		if(num <0)
			printf("Numero negativo \n");
			
		printf("Digite o valor: ");
		scanf("%d", &num);
	}
	
	printf("O maior e menor numero respectivamente sao: %d, %d", maior, menor);
	
}
