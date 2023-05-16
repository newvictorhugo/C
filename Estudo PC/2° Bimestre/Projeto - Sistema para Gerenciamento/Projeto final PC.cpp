#include <stdio.h>
#include <string.h>
#define tfNum 99
#define tfVol 99
#define tfCod 99
#define tfEmp 99
#define tfRolP 99
#define tfProj 99
#define tfHoras 99

main(){
	int vetNum[tfNum], tlNum=0, vetCod[tfCod], tlCod=0, vetRolP[tfRolP], tlRolP=0, vetHoras[tfHoras], tlHoras=0, i, j, k, l, opcao, pos, elemExiste, validVol, validEmp, validProj, horasTrab;
	char vetVol[tfVol][100], tlVol=0, nome[100], vetEmp[tfEmp][100], tlEmp=0, empresa[100], vetProj[tfProj][100], tlProj=0, projeto[100], resposta;
	
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
							//REMOVER ESPAÇO	Duvida professora
							//for (i = 0; nome[i] == ' '; i++); // remove espaços no início da string
						    //for (j = strlen(nome)-1; j > 0 && nome[j] == ' '; j--); // remove espaços no final da string
						    //nome[j+1] = '\0'; // adiciona o caractere nulo no final da string
						    //if (i > 0) memmove(nome, nome+i, strlen(nome)-i+1); // move a string para a esquerda para preencher os espaços removidos
					
							l=0;
							elemExiste=0;
							for(i=0;i<tfVol;i++){
								if(strncmp(nome + l, vetVol[i], strlen(nome) - l) == 0) {
									printf("Voluntario ja cadastrado.");
						       		elemExiste=1;
						   		}
							}
							if(elemExiste==0){
								if(tlVol<tfVol){
									strcpy(vetVol[tlVol], nome);
									vetNum[tlNum] = tlNum;
									tlVol++;
									tlNum++;
									printf("\nVoluntario cadastrado com sucesso!\n");
								}
								else{
									printf("\nLimite de voluntario atingido.\n");
								}
							}
							opcao=1;
						break;
						
						case 2:
							printf("\n---Cadastrar Empresa---\n\n");
							printf("Empresa: "); 
							fflush(stdin);
							gets(empresa);
							
							l=0;
							elemExiste=0;
							for(i=0;i<tfEmp;i++){
								if(strncmp(empresa + l, vetEmp[i], strlen(empresa) - l) == 0) {
									printf("Empresa ja cadastrada.");
						       		elemExiste=1;
						   		}
							}
							if(elemExiste==0){
								if(tlEmp<tfEmp){
									strcpy(vetEmp[tlEmp], empresa);
									vetCod[tlCod] = tlCod;
									tlEmp++;
									tlCod++;
									printf("\nEmpresa cadastrada com sucesso!\n");
								}
								else{
									printf("\nLimite de empresas atingido.\n");
								}
							}
							opcao=1;
						break;		
						
						case 3:
							printf("\n---Cadastrar Projeto---\n\n");
							printf("Projeto: "); 
							fflush(stdin);
							gets(projeto);
							
							l=0;
							elemExiste=0;
							for(i=0;i<tfProj;i++){
								if(strncmp(projeto + l, vetProj[i], strlen(projeto) - l) == 0) {
									printf("Projeto ja cadastrado.");
						       		elemExiste=1;
						   		}
							}
							if(elemExiste==0){
								if(tlProj<tfProj){
									strcpy(vetProj[tlProj], projeto);
									vetRolP[tlRolP] = tlRolP;
									tlProj++;
									tlRolP++;
									printf("\nProjeto cadastrado com sucesso!\n");
								}
								else{
									printf("\nLimite de projeto atingido.\n");
								}
							}
							opcao=1;
						break;
					}
				break;
				
				//Voluntario excluido ainda exibe que esta cadastrado. Duvida Professora.
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
							printf("Digite o codigo do voluntario: ");
							fflush(stdin);
							scanf("%d", &pos);
							
							for(i=0;i<tlNum;i++){
								if(vetNum[i] == pos){
									printf("Voce tem certeza que deseja excluir o voluntario %d - %s? (y/n)", pos, vetVol[i]);
									fflush(stdin);
									scanf("%c", &resposta);
									if(resposta=='y'){
										for(j = i;j<tlNum -1;j++){
											strcpy(vetVol[j], vetVol[j+1]);
										}
										tlNum--;
										printf("\nVoluntario excluido com sucesso!\n\n");
									}
									else{
										printf("\nVoluntario nao excluido.\n\n");
										break;
									}
								}
							}
							if(i == tlNum){
               					printf("\nVoluntario nao encontrado.\n\n");
				            }				
							opcao=2;
						break;
						
						case 2:
							printf("\n---Excluir Empresa---\n\n");
							printf("Digite o codigo da empresa: ");
							fflush(stdin);
							scanf("%d", &pos);
							
							for(i=0;i<tlCod;i++){
								if(vetCod[i] == pos){
									printf("Voce tem certeza que deseja excluir a empresa %d - %s? (y/n)", pos, vetEmp[i]);
									fflush(stdin);
									scanf("%c", &resposta);
									if(resposta=='y'){
										for(j = i;j<tlCod -1;j++){
											strcpy(vetEmp[j], vetEmp[j+1]);
										}
										tlCod--;
										printf("\nEmpresa excluido com sucesso!\n\n");
									}
									else{
										printf("\nEmpresa nao excluida.\n\n");
										break;
									}
								}
							}
							if(i == tlCod){
               					printf("\nEmpresa nao encontrado.\n\n");
				            }				
							opcao=2;
						break;
						
						case 3:
							printf("\n---Excluir Projeto---\n\n");
							printf("Digite o codigo do projeto: ");
							fflush(stdin);
							scanf("%d", &pos);
							
							for(i=0;i<tlRolP;i++){
								if(vetRolP[i] == pos){
									printf("Voce tem certeza que deseja excluir a empresa %d - %s? (y/n)", pos, vetProj[i]);
									fflush(stdin);
									scanf("%c", &resposta);
									if(resposta=='y'){
										for(j = i;j<tlRolP -1;j++){
											strcpy(vetProj[j], vetProj[j+1]);
										}
										tlRolP--;
										printf("\nProjeto excluido com sucesso!\n\n");
									}
									else{
										printf("\nProjeto nao excluido.\n\n");
										break;
									}
								
								}
							}
							if(i == tlRolP){
               					printf("\nProjeto nao encontrado.\n\n");
          					}				
							opcao=2;
						break;
					}
				break;
				
				case 3:
					printf("\n---Lancamento de horas---\n\n");
					elemExiste=0;
					if(tlNum==0){
						printf("\nNao ha voluntarios cadastrados para registrar horas.\n\n");
						opcao=9;
						break;
					}
					else{
						do{
							printf("Insira o numero do Voluntario: ");
							fflush(stdin);
							scanf("%d", &validVol);
							for(i=0;i<tlVol;i++){
								
								if(vetNum[i] == validVol){
									elemExiste=1;
									break;
								}
								else{
									printf("\nNumero de voluntario nao existe.\n\n");
								}
							}
						}while(elemExiste==0);
					}
					
					elemExiste=0;
					if(tlCod==0){
						printf("\nNao ha empresas cadastradas para registrar horas.\n\n");
						opcao=9;
						break;
					}
					else{
						do{
							printf("Insira o codigo da Empresa: ");
							fflush(stdin);
							scanf("%d", &validEmp);
							for(i=0;i<tlEmp;i++){
								
								if(vetCod[i] == validEmp){
									elemExiste=1;
									break;
								}
								else{
									printf("\nCodigo de empresa nao existe.\n\n");
								}
							}
						}while(elemExiste==0);
					}
					
					elemExiste=0;
					if(tlRolP==0){
						printf("\nNao ha projetos cadastrados para registrar horas.\n\n");
						opcao=9;
						break;
					}
					else{
						do{
							printf("Insira o codigo do Projeto: ");
							fflush(stdin);
							scanf("%d", &validProj);
							for(i=0;i<tlProj;i++){
								
								if(vetRolP[i] == validProj){
									elemExiste=1;
									break;
								}
								else{
									printf("\nCodigo de projeto nao existe.\n\n");
								}
							}
						}while(elemExiste==0);
					}
					
					printf("Insira o tempo em horas trabalhadas pelo voluntario %d: ", validVol);
					scanf("%d", &horasTrab);
					if(tlHoras<tfHoras){
						vetHoras[tlHoras] = horasTrab;
						tlHoras++;
					}
					
					opcao=9;
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
					if(tlRolP==0){
						printf("\n--Lista de Lista de Projetos---\n");
						printf("\nNao ha Projetos cadastradas...\n\n");
					}
					else{
						printf("\n--Lista de Projetos---\n\n");
						for(i=0;i<tlRolP;i++){
							printf("%d - %s\n", vetRolP[i], vetProj[i]);
						}
					}
					
					printf("\n9 - Voltar\n\n");
					fflush(stdin);
					scanf("%d", &opcao);
				break;
				
				default:
					printf("\nOpcao Invalida.\n\n");
					printf("\n---Sistema de Gerenciamento ONGADAPV---:\n\n");
					printf("1 - Cadastrar\n");
					printf("2 - Exclusao\n");
					printf("3 - Lancamento\n");
					printf("4 - Relatorio\n");
					printf("9 - Finalizar\n\n");
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
