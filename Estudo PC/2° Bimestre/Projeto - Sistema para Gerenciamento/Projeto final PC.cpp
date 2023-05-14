#include <stdio.h>
#include <string.h>
#define tfNum 99
#define tfVol 99
#define tfCod 99
#define tfEmp 99
#define tfRolP 99
#define tfProj 99

main(){
	int vetNum[tfNum], tlNum=0, vetCod[tfCod], tlCod=0, vetRolP[tfRolP], tlRolP=0, i, j, opcao, pos;
	char vetVol[tfVol][100], tlVol=0, nome[100], vetEmp[tfEmp][100], tlEmp=0, empresa[100], vetProj[tfProj][100], tlProj=0, projeto[100];
	
	printf("\n---Sistema de Gerenciamento ONGADAPV---:\n\n");
	printf("1 - Cadastrar\n");
	printf("2 - Exclusao\n");
	printf("3 - Lancamento\n");
	printf("4 - Relatorio\n");
	printf("9 - Finalizar\n\n");
	fflush(stdin);
	scanf("%d", &opcao);
	
	while(opcao!=9){

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
								printf("Limite de voluntario atingido.");
							}
							opcao=1;
						break;
						
						case 2:
							printf("\n---Cadastrar Empresa---\n\n");
							printf("Empresa: "); 
							fflush(stdin);
							gets(empresa);
							if(tlEmp<tfEmp){
								strcpy(vetEmp[tlEmp], empresa);
								vetCod[tlCod] = tlCod;
								tlEmp++;
								tlCod++;
							}
							else{
								printf("Limite de empresas atingido.");
							}
							opcao=1;
						break;		
						
						case 3:
							printf("\n---Cadastrar Projeto---\n\n");
							printf("Projeto: "); 
							fflush(stdin);
							gets(projeto);
							if(tlProj<tfProj){
								strcpy(vetProj[tlProj], projeto);
								vetCod[tlRolP] = tlRolP;
								tlProj++;
								tlRolP++;
							}
							else{
								printf("Limite de projeto atingido.");
							}
							opcao=1;
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
							printf("Digite o numero do voluntario: ");
							fflush(stdin);
							scanf("%d", &pos);
							
							for(i=0;i<tlNum;i++){
								if(vetNum[i] == pos){
									for(j = i;j<tlNum -1;j++){
										strcpy(vetVol[j], vetVol[j+1]);
									}
									tlNum--;
									printf("\nVoluntario excluido com sucesso.\n\n");
								}
							}
							if(i == tlNum){
               				printf("\nVoluntario nao encontrado.\n\n");
            }				opcao=2;
						break;
						
						case 2:
							printf("\n---Excluir Empresa---\n\n");
							printf("Digite o codigo da empresa: ");
							fflush(stdin);
							scanf("%d", &pos);
							
							for(i=0;i<tlCod;i++){
								if(vetCod[i] == pos){
									for(j = i;j<tlCod -1;j++){
										strcpy(vetEmp[j], vetEmp[j+1]);
									}
									tlCod--;
									printf("\nEmpresa excluido com sucesso.\n\n");
								}
							}
							if(i == tlCod){
               				printf("\nEmpresa nao encontrado.\n\n");
            }				opcao=2;
						break;
					}
				break;
					
				case 4:
					if(tlNum==0){
						printf("\n--Lista de Voluntarios---\n");
						printf("\nNao ha voluntarios cadastrados...\n\n");
					}
					else{
						printf("\n--Lista de Voluntarios---\n\n");
						for(i=0;i<tlNum;i++){
							printf("%d - %s\n", vetNum[i], vetVol[i]);
						}
					}
					if(tlCod==0){
						printf("\n--Lista de Empresas---\n");
						printf("\nNao ha empresas cadastradas...\n\n");
					}
					else{
						printf("\n--Lista de Empresas---\n\n");
						for(i=0;i<tlCod;i++){
							printf("%d - %s\n", vetCod[i], vetEmp[i]);
						}
					}
					
					printf("\n9 - Voltar\n\n");
					fflush(stdin);
					scanf("%d", &opcao);
				break;
			}
		}
		printf("\n---Sistema de Gerenciamento ONGADAPV---:\n\n");
		printf("1 - Cadastrar\n");
		printf("2 - Exclusao\n");
		printf("3 - Lancamento\n");
		printf("4 - Relatorio\n");
		printf("9 - Finalizar\n\n");
		fflush(stdin);
		scanf("%d", &opcao);
	}
	

	return 0;
}
