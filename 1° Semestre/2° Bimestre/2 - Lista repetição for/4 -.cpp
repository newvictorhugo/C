#include <stdio.h>

main(){
	int predio, numconsumidor, qntkwh, codconsumidor;
	float custototal, preco, totalconsumo, mediaconsumo, contconsumo, contconsumototal;
	
	for(predio=0; predio<=2; predio++){
		
		printf("Numero do Consumidor: \n");
		scanf("%d", &numconsumidor);
		
		printf("Quantidade de kWh consumidos durante o mes: \n");
		scanf("%d", &qntkwh);
		
		printf("Codigo do consumidor: \n");
		scanf("%d", &codconsumidor);
		
		switch(codconsumidor){
			
			case 1: preco=0.3;
			break;
			case 2: preco=0.5;
			break;
			case 3: preco=0.7;
			break;
		}
		custototal = qntkwh*preco;
		totalconsumo+=qntkwh;
		
		if(codconsumidor=1){
			contconsumototal+=qntkwh;
			contconsumo++;
		}
		if(codconsumidor=2){
			contconsumototal+=qntkwh;
			contconsumo++;
		}
		printf("O custo total do consumidor %d sera: %5.2f \n\n", numconsumidor, custototal);
	}
	mediaconsumo=contconsumototal/contconsumo;
	printf("O total de consumo de todos os consumidores e: %5.2f \n", totalconsumo);
	printf("A media do consumo dos tipos 1 e 2 e: %5.2f \n", mediaconsumo);
	
}
