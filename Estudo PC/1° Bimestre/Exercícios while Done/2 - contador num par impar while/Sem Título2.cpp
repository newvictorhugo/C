#include <stdio.h>

main(){
	
	int contador=0, contadorNumPar=0,contadorNumImpar=0, num;
	
	while (contador<5)
	{
		printf("Digite um numero: \n");
		scanf("%d", &num);
		
		if(num%2 == 0)
			contadorNumPar++;
			
		else
			contadorNumImpar++;
		contador++;
		
	}
	 printf("A quantidade de numeros pares e impares respectivamente sao: %d, %d",contadorNumPar, contadorNumImpar);
}
