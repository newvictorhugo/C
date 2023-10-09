#include <stdio.h>

main(){
	int categoria, imposto, aumento;
	float preco, novoPreco;
	char situacao;
	
	printf("1 - Limpeza \n");
	printf("2 - Alimentacao \n");
	printf("3 - Vestuario \n");
	printf("Escolha a categoria do produto:  \n");
	scanf("%d", &categoria);
	
	while(categoria!=0){
		
		switch(categoria){
			
			case 1: printf("R - Produtos que necessitam de refrigeracao \n");
					printf("N - Produtos que nao necessitam de refrigeracao \n");
					printf("Informe a situacao do produto: \n");
					fflush(stdin);
					scanf("%c", &situacao);
					
					printf("Informe o preco do produto: \n");
					scanf("%f", &preco);
					
					if(preco <= 25){
						aumento = 5;
						preco = preco + (preco *aumento/100);
					}
					if(preco > 25){
						aumento = 12;
						preco = preco + (preco *aumento/100);
					}
					
					if(situacao == 'R'){
						imposto = 5;
						novoPreco = preco - (preco *imposto/100);
					}
					if(situacao == 'N'){
						imposto = 8;
						novoPreco = preco - (preco *imposto/100);
					}
					
					printf("Preco do item: %5.2f, Porcentagem de aumento: %d %%, Porcentagem de imposto: %d %%, Novo valor do produto: %5.2f \n", preco, aumento, imposto, novoPreco);
					if(novoPreco<=50)
						printf("Este item esta em promocao \n \n");
					
					if(novoPreco>50 && novoPreco<120)
						printf("Este item esta com preco normal \n \n");
					
					if(novoPreco>=120)
						printf("Este item esta com preco extra \n \n");
					
					break;
					
 			case 2: printf("R - Produtos que necessitam de refrigeracao \n");
					printf("N - Produtos que nao necessitam de refrigeracao \n");
					printf("Informe a situacao do produto: \n");
					fflush(stdin);
					scanf("%c", &situacao);
					
					printf("Informe o preco do produto: \n");
					scanf("%f", &preco);
					
					if(preco <= 25){
						aumento = 8;
						preco = preco + (preco *aumento/100);
					}
					if(preco > 25){
						aumento = 15;
						preco = preco + (preco *aumento/100);
					}
					
					imposto = 5;
					novoPreco = preco - (preco *imposto/100);
					
					
					printf("Preco do item: %5.2f, Porcentagem de aumento: %d %%, Porcentagem de imposto: %d %%, Novo valor do produto: %5.2f \n", preco, aumento, imposto, novoPreco);
					if(novoPreco<=50)
						printf("Este item esta em promocao \n \n");
					
					if(novoPreco>50 && novoPreco<120)
						printf("Este item esta com preco normal \n \n");
					
					if(novoPreco>=120)
						printf("Este item esta com preco extra \n \n");
					
					break;
			
			case 3: printf("R - Produtos que necessitam de refrigeracao \n");
					printf("N - Produtos que nao necessitam de refrigeracao \n");
					printf("Informe a situacao do produto: \n");
					fflush(stdin);
					scanf("%c", &situacao);
					
					printf("Informe o preco do produto: \n");
					scanf("%f", &preco);
					
					if(preco <= 25){
						aumento = 10;
						preco = preco + (preco *aumento/100);
					}
					if(preco > 25){
						aumento = 18;
						preco = preco + (preco *aumento/100);
					}
					
					if(situacao == 'R'){
						imposto = 5;
						novoPreco = preco - (preco *imposto/100);
					}
					if(situacao == 'N'){
						imposto = 8;
						novoPreco = preco - (preco *imposto/100);
					}
					
					printf("Preco do item: %5.2f, Porcentagem de aumento: %d %%, Porcentagem de imposto: %d %%, Novo valor do produto: %5.2f \n", preco, aumento, imposto, novoPreco);
					if(novoPreco<=50)
						printf("Este item esta em promocao \n \n");
					
					if(novoPreco>50 && novoPreco<120)
						printf("Este item esta com preco normal \n \n");
					
					if(novoPreco>=120)
						printf("Este item esta com preco extra \n \n");
					
					break;
		}	
		printf("1 - Limpeza \n");
		printf("2 - Alimentacao \n");
		printf("3 - Vestuario \n");
		printf("Escolha a categoria do produto:  \n");
		scanf("%d", &categoria);		
	}
	
	
}
