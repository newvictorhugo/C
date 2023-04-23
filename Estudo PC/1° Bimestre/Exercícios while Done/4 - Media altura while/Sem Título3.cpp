#include <stdio.h>

main(){
	int idade, contIdade=0;
	float altura, somaAltura=0, media;
	
	printf("Idade da pessoa: ");
	scanf("%d", &idade);
	
	while(idade > 0){
		
		printf("Digite a altura: ");
		scanf("%f", &altura);
		
		if(idade >50){
			
			somaAltura = somaAltura + altura;
			contIdade++;
		}
		
		printf("Idade da pessoa: ");
		scanf("%d", &idade);
	}
	
	media = somaAltura / (float)contIdade;
	printf("A media da altura de pessoas com mais de 50 anos e: %5.2f", media);	
	
}
