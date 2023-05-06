#include <stdio.h>
#define tf 13

main(){
	int vet[tf], i, tempmaior=0, tempmenor=99999, mesmaior, mesmenor;
	
	for(i=1;i<tf;i++){
		printf("Informe a temperatura media do mes [%d]: ", i);
		scanf("%d", &vet[i]);
	}
	for(i=1;i<tf;i++){
		if(vet[i]>tempmaior){
			tempmaior=vet[i];
			mesmaior=i;
		}
		if(vet[i]<tempmenor){
			tempmenor=vet[i];
			mesmenor=i;
		}
	}
	printf("A maior temperatura do ano foi %d graus no mes %d\n", tempmaior, mesmaior);
	printf("A menor temperatura do ano foi %d graus no mes %d\n", tempmenor, mesmenor);
}
