#include <stdio.h>

main(){
	
	int contador=0, contadorIdade=0, idade;
	
	while (contador<10)
	{
		printf("Digite sua idade: \n");
		scanf("%d", &idade);
		
		if(idade > 18)
			contadorIdade++;
			
		contador++;
	}
	 printf("A quantidade de pessoas maior de 18 anos e: %d", contadorIdade);
}
