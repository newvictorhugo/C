#include <stdio.h>

int main(){
	int codCity, maiorCidadeAc=0, menorCidadeAc=0, numAcTran, somaAcTran=0, contAcTran=0, somaVePasseio=0, numVePasseio, contVePasseio=0, maior=0, menor=9999;
	float mediaVePasseio, mediaAcTran;
	
	printf("Informe o codigo da cidade: \n");
	scanf("%d", &codCity);
	
	do{
		
		printf("Informe o numero de veiculos de passeio desta cidade: \n");
		scanf("%d", &numVePasseio);
		
		if(numVePasseio>=0){
			somaVePasseio = somaVePasseio + numVePasseio;
			contVePasseio++;
		}
		
		printf("Informe o numero de acidentes de transito desta cidade: \n");
		scanf("%d", &numAcTran);
		
		if(numAcTran>=0){
			if(numAcTran>maior){
				maior = numAcTran;
				maiorCidadeAc = codCity;
			}
				
				
			if(numAcTran<menor){
				menor = numAcTran;
				menorCidadeAc = codCity;
			}
		
		}
		if(numVePasseio<2000){
			somaAcTran = somaAcTran + numAcTran;
			contAcTran++;
		}

		printf("Informe o codigo da cidade: \n");
		scanf("%d", &codCity);
		
	}while(codCity!=0);
	mediaVePasseio = somaVePasseio / contVePasseio;
	mediaAcTran = somaAcTran / contAcTran;
	printf("O maior numero de acidentes e %d da cidade %d e o menor numero de acidentes e %d da cidade %d \n", maior, maiorCidadeAc, menor, menorCidadeAc);
	printf("A media de veiculos dentre todas as cidades e %5.2f \n", mediaVePasseio);
	printf("A media de acidentes de transito nas cidades com menos de 2000 veiculos e %5.2f \n", mediaAcTran);
	
}
