#include <stdio.h>

main(){
	int codigo;
	float salario, salarioReajuste;
	
	printf("Informe seu codigo: ");
	scanf("%d", &codigo);
	
	while(codigo != 0){
		printf("Informe seu salario: ");
		scanf("%f", &salario);
		
		switch(codigo){
			case 1: salarioReajuste = salario + (salario*50/100);
					printf("O seu cargo e %d \n", codigo);
					printf("O percentual de aumento e 50%% \n");
					printf("Seu salario reajustado e: %5.2f \n", salarioReajuste);
					break;
					
			case 2: salarioReajuste = salario + (salario*35/100);
					printf("O seu cargo e %d \n", codigo);
					printf("O percentual de aumento e 35%% \n");
					printf("Seu salario reajustado e: %5.2f \n", salarioReajuste);
					break;
					
			case 3: salarioReajuste = salario + (salario*20/100);
					printf("O seu cargo e %d \n", codigo);
					printf("O percentual de aumento e 20%% \n");
					printf("Seu salario reajustado e: %5.2f \n", salarioReajuste);
					break;
			
			case 4: salarioReajuste = salario + (salario*10/100);
					printf("O seu cargo e %d \n", codigo);
					printf("O percentual de aumento e 10%% \n");
					printf("Seu salario reajustado e: %5.2f \n", salarioReajuste);
					break;
			
			case 5: salarioReajuste = salario;
					printf("O seu cargo e %d \n", codigo);
					printf("Nao tem aumento \n");
					break;
					
		}
		printf("Informe seu codigo: ");
		scanf("%d", &codigo);
	}
}
	
