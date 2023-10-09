#include <stdio.h>

main(){
	float desconto, rendaFam, valorMens, valorDesc;
	int idade, codCurso;
	char sexo;
	
	printf("1 - Analise e Desenvolvimento de Sistemas \n");
	printf("2 - Ciencia da Computacao \n");
	printf("3 - Engenharia da Computacao \n");
	printf("Informe o codigo de seu curso: \n");
	scanf("%d", &codCurso);

	
	while(codCurso!=0){
		
		switch(codCurso){
			
			case 1: 
					
					printf("Informe sua idade: \n");
					scanf("%d", &idade);
					
					printf("Informe seu genero, M - Masculino e F - Feminino: \n");
					fflush(stdin);
					scanf("%c", &sexo);
					
					printf("Informa sua renda Familiar: \n");
					scanf("%f", &rendaFam);
					
					if(rendaFam <= 3000){
						if(idade>=25&& idade <=30){
							
							if(sexo='F')
								desconto = 20;
							if(sexo='M')
								desconto = 10;
							
						}
						if(idade>=31 && idade<=39){
							
							if(sexo='F')
								desconto = 35;
							if(sexo='M')
								desconto = 20;
						}
						if(idade>=40){
							
							if(sexo='F')
								desconto = 50;
							if(sexo='M')
								desconto = 35;
						}
					}
					else
						desconto = 0;
					valorMens = 500;
					valorDesc = valorMens - valorMens * (desconto/100);
					printf("O valor total do curso e %5.2f, valor com desconto sera %5.2f %% \n\n", valorMens, desconto);
					break;
					
			case 2: 
					
					printf("Informe sua idade: \n");
					scanf("%d", &idade);
					
					printf("Informe seu genero, M - Masculino e F - Feminino: \n");
					fflush(stdin);
					scanf("%c", &sexo);
					
					printf("Informa sua renda Familiar: \n");
					scanf("%f", &rendaFam);
					
					if(rendaFam <= 3000){
						if(idade>=25&& idade <=30){
							
							if(sexo='F')
								desconto = 20;
							if(sexo='M')
								desconto = 10;
							
						}
						if(idade>=31 && idade<=39){
							
							if(sexo='F')
								desconto = 35;
							if(sexo='M')
								desconto = 20;
						}
						if(idade>=40){
							
							if(sexo='F')
								desconto = 50;
							if(sexo='M')
								desconto = 35;
						}
					}
					else
						desconto = 0;
					valorMens = 1500;
					valorDesc = valorMens - valorMens * (desconto/100);
					printf("O valor total do curso e %5.2f, valor com desconto sera %5.2f %% \n\n", valorMens, desconto);
					break;
					
			case 3: 
					
					printf("Informe sua idade: \n");
					scanf("%d", &idade);
					
					printf("Informe seu genero, M - Masculino e F - Feminino: \n");
					fflush(stdin);
					scanf("%c", &sexo);
					
					printf("Informa sua renda Familiar: \n");
					scanf("%f", &rendaFam);
					
					if(rendaFam <= 3000){
						if(idade>=25&& idade <=30){
							
							if(sexo='F')
								desconto = 20;
							if(sexo='M')
								desconto = 10;
							
						}
						if(idade>=31 && idade<=39){
							
							if(sexo='F')
								desconto = 35;
							if(sexo='M')
								desconto = 20;
						}
						if(idade>=40){
							
							if(sexo='F')
								desconto = 50;
							if(sexo='M')
								desconto = 35;
						}
					}
					else
						desconto = 0;
					valorMens = 2000;
					valorDesc = valorMens - valorMens * (desconto/100);
					printf("O valor total do curso e %5.2f, valor com desconto sera %5.2f %% \n\n", valorMens, desconto);
					break;
					
			
			
		}
		printf("1 - Analise e Desenvolvimento de Sistemas \n");
		printf("2 - Ciencia da Computacao \n");
		printf("3 - Engenharia da Computacao \n");
		printf("Informe o codigo de seu curso: \n");
		scanf("%d", &codCurso);
	}	
}
