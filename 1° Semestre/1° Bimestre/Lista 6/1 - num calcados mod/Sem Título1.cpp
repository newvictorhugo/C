#include <stdio.h>

main(){
	int dia=1, venda, diaMaior=0, vendaMaior=0;
	char opcao;
	
	printf("\n ===== MENU =====");
	printf("\n J - Janeiro");
	printf("\n F - Fevereiro");
	printf("\n M - Marco");
	printf("\n A - Abril");
	printf("\n m - Maio");
	printf("\n J - Junho");
	printf("\n j - Julho");
	printf("\n a - Agosto");
	printf("\n S - Setembro");
	printf("\n O - Outubro");
	printf("\n N - Novembro");
	printf("\n D - Dezembro");
	printf("\nEntre com o mes desejado: ");
	fflush(stdin);
	scanf("%c", &opcao);
	
	switch(opcao){
		
		case 'J': 
		printf("Selecionado o mes de Janeiro \n");
		while(dia<=5){
			printf("Numero de vendas do dia %d: \n", dia);
			scanf("%d", &venda);
		
		if(venda>vendaMaior){
			vendaMaior = venda;
			diaMaior = dia;
		}
		dia++;		
	}
	printf("A maior quantidade de venda aconteceu no dia %d de %c, com %d venda.", diaMaior, opcao, vendaMaior);
	
		
	}
	
}
