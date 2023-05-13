#include <stdio.h>
#include <string.h>
#define tfNum 99
#define tfVol 99

main(){
	int vetNum[tfNum], tlNum=0, i, j, opcao, posNum;
	char vetVol[tfVol][100], tlVol=0, nome[100];
	
	printf("\n---Sistema de Gerenciamento ONGADAPV---:\n\n");
	printf("1 - Cadastrar\n");
	printf("2 - Exclusao\n");
	printf("3 - Lancamento\n");
	printf("4 - Relatorio\n");
	printf("5 - Finalizar\n\n");
	fflush(stdin);
	scanf("%d", &opcao);
	
	while(opcao!=5){

		while(opcao!=9){
			switch(opcao){
				
				case 1:
					printf("\n---Cadastrar---\n\n");
					printf("1 - Cadastrar Voluntario\n");
					printf("2 - Cadastrar Empresa\n");
					printf("3 - Cadastrar Projeto\n");
					printf("9 - Voltar\n\n");
					fflush(stdin);
					scanf("%d", &opcao);
					
					switch(opcao){
						
						case 1:
							printf("\n---Cadastrar Voluntario---\n\n");
							printf("Nome: "); 
							fflush(stdin);
							gets(nome);
							if(tlVol<tfVol){
								strcpy(vetVol[tlVol], nome);
								vetNum[tlNum] = tlNum;
								tlVol++;
								tlNum++;
							}
							else{
								printf("Limite de voluntario atingido");
							}
						break;	
					}
				break;
				
				case 2:
					printf("\n---Exclusao---\n\n");
					printf("1 - Excluir Voluntario\n");
					printf("2 - Excluir Empresa\n");
					printf("3 - Excluir Projeto\n");
					printf("9 - Voltar\n\n");
					fflush(stdin);
					scanf("%d", &opcao);
					
					switch(opcao){
						
						case 1:
							printf("\n---Excluir Voluntario---\n\n");
							printf("Digite o ID do voluntario: ");
							fflush(stdin);
							scanf("%d", &posNum);
							
							for(i=0;i<tlNum;i++){
								if(vetNum[i] == posNum){
									for(j = i;j<tlNum -1;j++){
										strcpy(vetVol[j], vetVol[j+1]);
									}
								tlNum--;
								printf("\nVoluntario excluido com sucesso.\n\n");
								}
							}
							if(i == tlNum){
               				printf("\nVoluntario nao encontrado.\n\n");
            }
						break;
					}
				break;
					
				case 4:
					if(tlNum==0){
						printf("\nNao ha voluntarios cadastrados...\n\n");
						printf("9 - Voltar\n\n");
						fflush(stdin);
						scanf("%d", &opcao);
					}
					else{
						printf("\n--Lista de Voluntarios---\n\n");
						for(i=0;i<tlNum;i++){
							printf("%d - %s\n", vetNum[i], vetVol[i]);
						}
						printf("\n9 - Voltar\n\n");
						fflush(stdin);
						scanf("%d", &opcao);
					}
				break;
			}
		}
		printf("\n---Sistema de Gerenciamento ONGADAPV---:\n\n");
		printf("1 - Cadastrar\n");
		printf("2 - Exclusao\n");
		printf("3 - Lancamento\n");
		printf("4 - Relatorio\n");
		printf("5 - Finalizar\n");
		fflush(stdin);
		scanf("%d", &opcao);
	}
	

	return 0;
}
