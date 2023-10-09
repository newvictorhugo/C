#include <stdio.h>
#include <ctype.h>

main(){
	int p, contFem=0, contMas=0, contPop=0, contAlto;
	float altura, somaAltFem=0, somaAltMas=0, mediaAltFem=0, mediaAltPop=0;
	char sexo;
	
	for(p=0; p<3; p++){
		printf("Altura: \n");
		scanf("%f", &altura);
		printf("Sexo: \n");
		fflush(stdin);
		scanf("%c", &sexo);
		sexo = toupper(sexo);
		
		//Item A
		switch(sexo){
			
			case 'F':
				somaAltFem = somaAltFem + altura;
				contFem++;
				contPop++;
				break;
			
			case 'M':
				somaAltMas = somaAltMas + altura;
				contMas++;
				contPop++;
				if(altura >=1.80)
					contAlto++;
				break;
				
		}
	}
	mediaAltFem = somaAltFem/contFem;
	mediaAltPop = (somaAltFem+somaAltMas)/contPop;
	printf("A media de altura das mulheres e: %5.2f \n", mediaAltFem);
	printf("A media de altura da populacao e: %5.2f \n", mediaAltPop);
	printf("A quantidade de homens e: %d \n", contMas);
	printf("A quantidade de homens acima de 1.80 de altura e: %d", contAlto);
}
