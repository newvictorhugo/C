#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<stdbool.h>

#define MAX_STR 100
#define MAX_STR_X10 1000
#define TF_VOL 10
#define TF_ANI 10
#define TF_EMP 10
#define TF_PROJ 10
#define TF_DOA 10
#define TF_HORAS 10
#define TF_RELAT 100

typedef struct{
	int vNum[TF_VOL], TLV = 0, cod_vol;
	char vVoluntario[MAX_STR], cel[MAX_STR], email[MAX_STR];
}voluntario;

typedef struct{
	int vNumAni[TF_ANI], TLA = 0, cod_ani;
	char vAnimal[MAX_STR], sexo, especie[MAX_STR], raca[MAX_STR], castrado;
}animal;

typedef struct{
	int vCod[TF_EMP], TLE = 0, cod_emp;
	char vEmpresa[MAX_STR], marcacao[MAX_STR_X10], descricao[MAX_STR_X10];
}empresa;

typedef struct{
	int vProj[TF_PROJ], TLP = 0, cod_proj;
	char vProjeto[MAX_STR], descricao[MAX_STR_X10], marcacao[MAX_STR_X10];
}projeto;

typedef struct{
	int vCodDoa[TF_DOA], TLD = 0, cod_doa;
	char vInfoQuem[MAX_STR], vInfoOque[MAX_STR];
}doacao;

typedef struct{
	int vHoras[TF_HORAS], TLH = 0, cod_horas;
}horas;

typedef struct{
	int vRelat[TF_RELAT], TLR = 0, cod_relat;
}relatorio;

typedef struct{
	int dia, mes, ano;
}diamesano;

typedef struct{
	voluntario vol;
	animal ani;
	empresa emp;
	projeto proj;
	doacao doa;
	horas hrs;
	relatorio relat;
	diamesano data;
}menuInfoStruct;

int menu(){
	int opcao;
	printf("\n\n---Sistema de Gerenciamento ONGADAPV---\n\n");
	printf("1 - Cadastrar\n");
	printf("2 - Exclusao\n");
	printf("3 - Alterar\n");
	printf("4 - Lancamento\n");
	printf("5 - Relatorio\n");
	printf("0 - Sair\n\n");
	scanf("%d", &opcao);
	getchar();
	return opcao;
}

int menuCadastrar(){
	int opcaoCad;
	printf("\n\n---Menu Cadastrar---\n\n");
	printf("1 - Cadastrar Voluntario\n");
	printf("2 - Cadastrar Animal\n");
	printf("3 - Cadastrar Empresa\n");
	printf("4 - Cadastrar Projeto\n");
	printf("5 - Cadastrar Doacao\n");
	printf("0 - Voltar\n\n");
	scanf("%d", &opcaoCad);
	getchar();
	return opcaoCad;
}

int menuExclusao(){
	int opcaoExc;
	printf("\n\n---Menu Exclusao---\n\n");
	printf("1 - Excluir Voluntario\n");
	printf("2 - Excluir Animal\n");
	printf("3 - Excluir Empresa\n");
	printf("4 - Excluir Projeto\n");
	printf("5 - Excluir Doacao\n");
	printf("0 - Voltar\n\n");
	scanf("%d", &opcaoExc);
	getchar();
	return opcaoExc;
}

int menuAlterar(){
	int opcaoAlt;
	printf("\n\n---Menu Alterar Info---\n\n");
	printf("1 - Alterar Voluntario\n");
	printf("2 - Alterar Animal\n");
	printf("3 - Alterar Empresa\n");
	printf("4 - Alterar Projeto\n");
	printf("5 - Alterar Doacao\n");
	printf("0 - Voltar\n\n");
	scanf("%d", &opcaoAlt);
	getchar();
	return opcaoAlt;
}

int menuRelatorio(){
	int opcaoRel;
	printf("\n\n---Menu Relatorio---\n\n");
	printf("1 - Relatorio Voluntario\n");
	printf("2 - Relatorio Empresa\n");
	printf("3 - Relatorio Projeto\n");
	printf("0 - Voltar\n\n");
	scanf("%d", &opcaoRel);
	getchar();
	return opcaoRel;
}

void cadastrarVoluntario(menuInfoStruct *a);
void cadastrarAnimal(menuInfoStruct *a);
void cadastrarEmpresa(menuInfoStruct *a);
void cadastrarProjeto(menuInfoStruct *a);
void cadastrarDoacao(menuInfoStruct *a);

void exclusaoVoluntario(menuInfoStruct *a);
void exclusaoAnimal(menuInfoStruct *a);
void exclusaoEmpresa(menuInfoStruct *a);
void exclusaoProjeto(menuInfoStruct *a);
void exclusaoDoacao(menuInfoStruct *a);

void alterarVoluntario(menuInfoStruct *a);
void alterarAnimal(menuInfoStruct *a);
void alterarEmpresa(menuInfoStruct *a);
void alterarProjeto(menuInfoStruct *a);
void alterarDoacao(menuInfoStruct *a);

void lancamentoHoras(menuInfoStruct *a);

void relatorioVoluntario(menuInfoStruct *a);
void relatorioAnimal(menuInfoStruct *a);
void relatorioEmpresa(menuInfoStruct *a);
void relatorioProjeto(menuInfoStruct *a);

int main(){
	menuInfoStruct a;
	int opcao, opcaoCad, opcaoExc, opcaoAlt, opcaoRel;
	
	do{
		opcao = menu();
		switch(opcao){

			case 1:
				system("cls");
				do{
					opcaoCad = menuCadastrar();
					switch(opcaoCad){
						
						case 1:
							system("cls");
							cadastrarVoluntario(&a);
							break;
							
						case 2:
							system("cls");
							cadastrarAnimal(&a);
							break;
							
						case 3:
							system("cls");
							cadastrarEmpresa(&a);
							break;
							
						case 4:
							system("cls");
							cadastrarProjeto(&a);
							break;
							
						case 5:
							system("cls");
							cadastrarDoacao(&a);
							break;
							
						case 0:
							system("cls");
							break;
							
						default:
							printf("\nOpcao invalida!!\n");
						
					}
				}while(opcaoCad!=0);
				
				break;
			
			case 2:
				system("cls");
				do{
					opcaoExc = menuExclusao();
					switch(opcaoExc){
						
						case 1:
							system("cls");
							exclusaoVoluntario(&a);
							break;
							
						case 2:
							system("cls");
							exclusaoAnimal(&a);
							break;
							
						case 3:
							system("cls");
							exclusaoEmpresa(&a);
							break;
							
						case 4:
							system("cls");
							exclusaoProjeto(&a);
							break;
							
						case 5:
							system("cls");
							exclusaoDoacao(&a);
							break;
							
						case 0:
							system("cls");
							break;
							
						default:
							printf("\nOpcao invalida!!\n");
						
					}
				}while(opcaoExc!=0);
				break;
			
			case 3:
				system("cls");
				do{
					opcaoAlt = menuAlterar();
					switch(opcaoAlt){
						
						case 1:
							system("cls");
							alterarVoluntario(&a);
							break;
							
						case 2:
							system("cls");
							alterarAnimal(&a);
							break;
							
						case 3:
							system("cls");
							alterarEmpresa(&a);
							break;
							
						case 4:
							system("cls");
							alterarProjeto(&a);
							break;
							
						case 5:
							system("cls");
							alterarDoacao(&a);
							break;
							
						case 0:
							system("cls");
							break;
							
						default:
							printf("\nOpcao invalida!!\n");
						
					}
				}while(opcaoAlt!=0);
				
				break;
			
			case 4:
				system("cls");
				lancamentoHoras(&a);
				break;
			
			case 5:
				system("cls");
				do{
					opcaoRel = menuRelatorio();
					switch(opcaoRel){
						case 1:
							relatorioVoluntario(&a);
							break;
							
						case 2:
							relatorioEmpresa(&a);
							break;
							
						case 3:
							relatorioProjeto(&a);
							break;
					}
					
				}while(opcaoRel!=0);
				break;
			
			case 0:
				printf("\n\nSistema finalizado!!\n\n");
				break;
			
			default:
				printf("\nOpcao invalida!!\n");
		
		}
	}while(opcao!=0);
	
}


bool codigoExiste(FILE *pont, int codigo) {
    int cod;
    char buffer[255];

    rewind(pont);

    while(fgets(buffer, 255, pont) != NULL){
        if(sscanf(buffer, "Cod: %d", &cod) == 1){
            if(cod == codigo){
                return true;
            }
        }
    }
    return false;
}

int busca(FILE *pont, char nome[]){
    char buffer[MAX_STR];
    long posicao = -1;

    rewind(pont);

    while(fgets(buffer, MAX_STR, pont) != NULL){
        if(strstr(buffer, nome) != NULL){
            fseek(pont, posicao, SEEK_SET);
            return posicao;
        }
        posicao = ftell(pont);
    }
    return -1;
}




//----------CADASTRO----------//


void cadastrarVoluntario(menuInfoStruct *a){
	char continuar;
	FILE *pont;
	pont = fopen("cadvoluntario.txt", "a+");
	if(pont == NULL){
		printf("\nErro ao acessar o arquivo!!\n");
		exit(1);
	}
	do{
		int indice = a->vol.TLV;
		int codigo;
		
		while(codigoExiste(pont, indice)){
			indice++;
		}
		
		printf("\n-Codigo do voluntario-");
		printf("\n(Sugestao '%d'): ", indice);
		do{
			scanf("%d", &codigo);
			getchar();
			
			if(codigoExiste(pont, codigo)){
				printf("\nCodigo ja existe!!\nDigite outro codigo(Sugestao '%d'): ", indice);
			}else{
				a->vol.vNum[indice] = codigo;
				break;
			}
		}while(true);
		printf("Nome Completo: ");
		fgets(a->vol.vVoluntario, sizeof(a->vol.vVoluntario), stdin);
		a->vol.vVoluntario[strcspn(a->vol.vVoluntario, "\n")] = 0;
		printf("Numero de celular((00)00000-0000): ");
		fgets(a->vol.cel, sizeof(a->vol.cel), stdin);
		a->vol.cel[strcspn(a->vol.cel, "\n")] = 0;
		printf("Email para contato: ");
		fgets(a->vol.email, sizeof(a->vol.email), stdin);
		a->vol.email[strcspn(a->vol.email, "\n")] = 0;
		
		fprintf(pont, "\nCod: %d\nNome: %s\nCelular: %s\nEmail: %s\n", a->vol.vNum[indice], a->vol.vVoluntario, a->vol.cel, a->vol.email);
		a->vol.TLV++;
		
		do{
			printf("Continuar?(s/n): ");
			scanf("%c", &continuar);
			getchar();
			continuar = tolower(continuar);
			if(continuar !='n' && continuar != 's'){
				printf("Opcao invalida!!\n");
			}
		}while(continuar != 's' && continuar != 'n');
	}while(continuar != 'n');
	
	
	fclose(pont);
}
void cadastrarAnimal(menuInfoStruct *a){
	char continuar;
	FILE *pont;
	pont = fopen("cadanimal.txt", "a+");
	if(pont == NULL){
		printf("\nErro ao acessar o arquivo!!\n");
		exit(1);
	}
	do{
		int indice = a->ani.TLA;
		int codigo;
		
		while(codigoExiste(pont, indice)){
			indice++;
		}
		
		printf("\n-Codigo do animal-");
		printf("\n(Sugestao '%d'): ", indice);
		do{
			scanf("%d", &codigo);
			getchar();
			
			if(codigoExiste(pont, codigo)){
				printf("\nCodigo ja existe!!\nDigite outro codigo(Sugestao '%d'): ", indice);
			}else{
				a->ani.vNumAni[indice] = codigo;
				break;
			}
		}while(true);
		printf("Nome do Animal: ");
		fgets(a->ani.vAnimal, sizeof(a->ani.vAnimal), stdin);
		a->ani.vAnimal[strcspn(a->ani.vAnimal, "\n")] = 0;
		printf("Nascimento(dd/mm/aaaa): ");
		scanf("%d/%d/%d", &a->data.dia, &a->data.mes, &a->data.ano);
		getchar();
		printf("Sexo(M - Macho/F - Femea/I - indefinido): ");
		scanf("%c", &a->ani.sexo);
		getchar();
		printf("Especie: ");
		fgets(a->ani.especie, sizeof(a->ani.especie), stdin);
		a->ani.especie[strcspn(a->ani.especie, "\n")] = 0;
		printf("Raca: ");
		fgets(a->ani.raca, sizeof(a->ani.raca), stdin);
		a->ani.raca[strcspn(a->ani.raca, "\n")] = 0;
		printf("Castrado(S/N): ");
		scanf("%c", &a->ani.castrado);
		getchar();
				
		fprintf(pont, "\nCod: %d\nNome: %s\nNascimento: %d/%d/%d\nSexo: %c\nEspecie: %s\nRaca: %s\nCastrado: %c\n", a->ani.vNumAni[indice], a->ani.vAnimal, a->data.dia, a->data.mes, a->data.ano, a->ani.sexo, a->ani.especie, a->ani.raca, a->ani.castrado);
		
		do{
			printf("Continuar?(s/n): ");
			scanf("%c", &continuar);
			getchar();
			continuar = tolower(continuar);
			if(continuar !='n' && continuar != 's'){
				printf("Opcao invalida!!\n");
			}
		}while(continuar != 's' && continuar != 'n');
	}while(continuar != 'n');
	
	
	fclose(pont);
}
void cadastrarEmpresa(menuInfoStruct *a){
	char continuar;
	FILE *pont;
	pont = fopen("cadempresa.txt", "a+");
	if(pont == NULL){
		printf("\nErro ao acessar o arquivo!!\n");
		exit(1);
	}
	do{
		int indice = a->emp.TLE;
		int codigo;
		
		while(codigoExiste(pont, indice)){
			indice++;
		}
		
		printf("\n-Codigo da empresa-");
		printf("\n(Sugestao '%d'): ", indice);
		do{
			scanf("%d", &codigo);
			getchar();
			
			if(codigoExiste(pont, codigo)){
				printf("\nCodigo ja existe!!\nDigite outro codigo(Sugestao '%d'): ", indice);
			}else{
				a->emp.vCod[indice] = codigo;
				break;
			}
		}while(true);
		printf("Nome da empresa: ");
		fgets(a->emp.vEmpresa, sizeof(a->emp.vEmpresa), stdin);
		a->emp.vEmpresa[strcspn(a->emp.vEmpresa, "\n")] = 0;
		printf("Descricao: ");
		fgets(a->emp.descricao, sizeof(a->emp.descricao), stdin);
		a->emp.descricao[strcspn(a->emp.descricao, "\n")] = 0;
		printf("Marcacao: ");
		fgets(a->emp.marcacao, sizeof(a->emp.marcacao), stdin);
		a->emp.marcacao[strcspn(a->emp.marcacao, "\n")] = 0;
		
		fprintf(pont, "\nCod: %d\nNome: %s\nDescricao: %s\nMarcacao: %s\n", a->emp.vCod[indice], a->emp.vEmpresa, a->emp.descricao, a->emp.marcacao);
		
		do{
			printf("Continuar?(s/n): ");
			scanf("%c", &continuar);
			getchar();
			continuar = tolower(continuar);
			if(continuar !='n' && continuar != 's'){
				printf("Opcao invalida!!\n");
			}
		}while(continuar != 's' && continuar != 'n');
	}while(continuar != 'n');
	
	
	fclose(pont);
}
void cadastrarProjeto(menuInfoStruct *a){
	char continuar;
	FILE *pont;
	pont = fopen("cadprojeto.txt", "a+");
	if(pont == NULL){
		printf("\nErro ao acessar o arquivo!!\n");
		exit(1);
	}
	do{
		int indice = a->proj.TLP;
		int codigo;
		
		while(codigoExiste(pont, indice)){
			indice++;
		}
		
		printf("\n-Codigo do projeto-");
		printf("\n(Sugestao '%d'): ", indice);
		do{
			scanf("%d", &codigo);
			getchar();
			
			if(codigoExiste(pont, codigo)){
				printf("\nCodigo ja existe!!\nDigite outro codigo(Sugestao '%d'): ", indice);
			}else{
				a->proj.vProj[indice] = codigo;
				break;
			}
		}while(true);
		printf("Nome do projeto: ");
		fgets(a->proj.vProjeto, sizeof(a->proj.vProjeto), stdin);
		a->proj.vProjeto[strcspn(a->proj.vProjeto, "\n")] = 0;
		printf("Descricao: ");
		fgets(a->proj.descricao, sizeof(a->proj.descricao), stdin);
		a->proj.descricao[strcspn(a->proj.descricao, "\n")] = 0;
		printf("Marcacao: ");
		fgets(a->proj.marcacao, sizeof(a->proj.marcacao), stdin);
		a->proj.marcacao[strcspn(a->proj.marcacao, "\n")] = 0;
		
		fprintf(pont, "\nCod: %d\nNome: %s\nDescricao: %s\nMarcacao: %s\n", a->proj.vProj[indice], a->proj.vProjeto, a->proj.descricao, a->proj.marcacao);
		
		do{
			printf("Continuar?(s/n): ");
			scanf("%c", &continuar);
			getchar();
			continuar = tolower(continuar);
			if(continuar !='n' && continuar != 's'){
				printf("Opcao invalida!!\n");
			}
		}while(continuar != 's' && continuar != 'n');
	}while(continuar != 'n');
	
	
	fclose(pont);
}
void cadastrarDoacao(menuInfoStruct *a){
	char continuar;
	FILE *pont;
	pont = fopen("caddoacao.txt", "a+");
	if(pont == NULL){
		printf("\nErro ao acessar o arquivo!!\n");
		exit(1);
	}
	do{
		int indice = a->doa.TLD;
		int codigo;
		
		while(codigoExiste(pont, indice)){
			indice++;
		}
		
		printf("\n-Codigo da doacao-");
		printf("\n(Sugestao '%d'): ", indice);
		do{
			scanf("%d", &codigo);
			getchar();
			
			if(codigoExiste(pont, codigo)){
				printf("\nCodigo ja existe!!\nDigite outro codigo(Sugestao '%d'): ", indice);
			}else{
				a->doa.vCodDoa[indice] = codigo;
				break;
			}
		}while(true);
		printf("Nome do doador: ");
		fgets(a->doa.vInfoQuem, sizeof(a->doa.vInfoQuem), stdin);
		a->doa.vInfoQuem[strcspn(a->doa.vInfoQuem, "\n")] = 0;
		printf("O que foi doado: ");
		fgets(a->doa.vInfoOque, sizeof(a->doa.vInfoOque), stdin);
		a->doa.vInfoOque[strcspn(a->doa.vInfoOque, "\n")] = 0;
		printf("Data(dd/mm/aaaa): ");
		scanf("%d/%d/%d", &a->data.dia, &a->data.mes, &a->data.ano);
		getchar();
		
		fprintf(pont, "\nCod: %d\nNome Doador: %s\nItem doado: %s\nData: %d/%d/%d\n", a->doa.vCodDoa[indice], a->doa.vInfoQuem, a->doa.vInfoOque, a->data.dia, a->data.mes, a->data.ano);
		
		do{
			printf("Continuar?(s/n): ");
			scanf("%c", &continuar);
			getchar();
			continuar = tolower(continuar);
			if(continuar !='n' && continuar != 's'){
				printf("Opcao invalida!!\n");
			}
		}while(continuar != 's' && continuar != 'n');
	}while(continuar != 'n');
	
	
	fclose(pont);
}
//----------FIM DE CADASTRO----------//


//----------EXCLUSAO----------//

void exclusaoVoluntario(menuInfoStruct *a){
	FILE *pont, *temp;
	char buffer[MAX_STR_X10];
	int cod, codBusca;
	int encontrado = 0;

	pont = fopen("cadvoluntario.txt", "r");
	if(pont == NULL){
		printf("\nErro ao acessar o arquivo!!\n");
		return;
	}

	temp = fopen("temp.txt", "w");
	if(temp == NULL){
		printf("\nErro ao criar arquivo temporario!!\n");
		fclose(pont);
		return;
	}

	printf("Digite o codigo do voluntario: ");
	scanf("%d", &codBusca);

	while(fgets(buffer, MAX_STR_X10, pont) != NULL){
		if(sscanf(buffer, "Cod: %d", &cod) == 1){
			if(cod == codBusca){
				encontrado = 1;
				printf("\nEncontrado:\n%s", buffer);
				while(fgets(buffer, MAX_STR_X10, pont) && strncmp(buffer, "\n", 1) != 0){
					printf("%s", buffer);
				}
				do{
					printf("\nDeseja realmente excluir? (s/n): ");
					char confirma;
					scanf(" %c", &confirma);
				
					if(confirma == 's' || confirma == 'S'){
						continue;
					}else if(confirma == 'n' || confirma == 'N'){
						encontrado = 2;
					}else{
						encontrado = 3;
						printf("\nOpcao invalida\n");
					}
				}while(encontrado==3);
				
			}
		}
		fprintf(temp, "%s", buffer);
	}

	fclose(pont);
	fclose(temp);
	system("cls");
	if(encontrado == 1){
		remove("cadvoluntario.txt");
		rename("temp.txt", "cadvoluntario.txt");
		printf("Voluntario excluido com sucesso!\n");
	} else if(encontrado == 0){
		remove("temp.txt");
		printf("Codigo nao encontrado.\n");
	}else{
		remove("temp.txt");
	}
}

void exclusaoAnimal(menuInfoStruct *a){
	FILE *pont, *temp;
	char buffer[MAX_STR_X10];
	int cod, codBusca;
	int encontrado = 0;

	pont = fopen("cadanimal.txt", "r");
	if(pont == NULL){
		printf("\nErro ao acessar o arquivo!!\n");
		return;
	}

	temp = fopen("temp.txt", "w");
	if(temp == NULL){
		printf("\nErro ao criar arquivo temporario!!\n");
		fclose(pont);
		return;
	}

	printf("Digite o codigo do animal: ");
	scanf("%d", &codBusca);

	while(fgets(buffer, MAX_STR_X10, pont) != NULL){
		if(sscanf(buffer, "Cod: %d", &cod) == 1){
			if(cod == codBusca){
				encontrado = 1;
				printf("\nEncontrado:\n%s", buffer);
				while(fgets(buffer, MAX_STR_X10, pont) && strncmp(buffer, "\n", 1) != 0){
					printf("%s", buffer);
				}
				do{
					printf("\nDeseja realmente excluir? (s/n): ");
					char confirma;
					scanf(" %c", &confirma);
				
					if(confirma == 's' || confirma == 'S'){
						continue;
					}else if(confirma == 'n' || confirma == 'N'){
						encontrado = 2;
					}else{
						encontrado = 3;
						printf("\nOpcao invalida\n");
					}
				}while(encontrado==3);
				
			}
		}
		fprintf(temp, "%s", buffer);
	}

	fclose(pont);
	fclose(temp);
	system("cls");
	if(encontrado == 1){
		remove("cadanimal.txt");
		rename("temp.txt", "cadanimal.txt");
		printf("Animal excluido com sucesso!\n");
	} else if(encontrado == 0){
		remove("temp.txt");
		printf("Codigo nao encontrado.\n");
	}else{
		remove("temp.txt");
	}
}
void exclusaoEmpresa(menuInfoStruct *a){
	FILE *pont, *temp;
	char buffer[MAX_STR_X10];
	int cod, codBusca, validar = 0;
	bool encontrado = false, confirmado = false;

	pont = fopen("cadempresa.txt", "r");
	if(pont == NULL){
		printf("\nErro ao acessar o arquivo!!\n");
		return;
	}

	temp = fopen("temp.txt", "w");
	if(temp == NULL){
		printf("\nErro ao criar arquivo temporario!!\n");
		fclose(pont);
		return;
	}

	printf("Digite o codigo da empresa: ");
	scanf("%d", &codBusca);
	getchar();

	while(fgets(buffer, MAX_STR_X10, pont) != NULL){
		if(encontrado && strncmp(buffer, "\n", 1) == 0) {
			confirmado = false;
		}

		if(sscanf(buffer, "Cod: %d", &cod) == 1 && cod == codBusca){
			encontrado = true;
			printf("\nEncontrado:\n%s", buffer);
			while(fgets(buffer, MAX_STR_X10, pont) && strncmp(buffer, "\n", 1) != 0){
				printf("%s", buffer);
			}
			char confirma;
			do {
				printf("\nDeseja realmente excluir? (s/n): ");
				scanf(" %c", &confirma);
				getchar();

				if(confirma == 's' || confirma == 'S'){
					confirmado = true;
					validar = 1;
					break;
				} else if(confirma == 'n' || confirma == 'N'){
					validar = 2;
					break;
				} else {
					printf("\nOpcao invalida\n");
				}
			} while(true);
		}

		if(!encontrado || !confirmado) {
			fprintf(temp, "%s", buffer);
		}
	}

	fclose(pont);
	fclose(temp);
	system("cls");
	if(validar == 1){
		remove("cadempresa.txt");
		rename("temp.txt", "cadempresa.txt");
		printf("Empresa excluida com sucesso!\n");
	} else if(validar == 2){
		remove("temp.txt");
	}else{
		remove("temp.txt");
		printf("Codigo nao encontrado.\n");
	}
}

void exclusaoProjeto(menuInfoStruct *a){
	FILE *pont, *temp;
	char buffer[MAX_STR_X10];
	int cod, codBusca, validar = 0;
	bool encontrado = false, confirmado = false;

	pont = fopen("cadprojeto.txt", "r");
	if(pont == NULL){
		printf("\nErro ao acessar o arquivo!!\n");
		return;
	}

	temp = fopen("temp.txt", "w");
	if(temp == NULL){
		printf("\nErro ao criar arquivo temporario!!\n");
		fclose(pont);
		return;
	}

	printf("Digite o codigo do projeto: ");
	scanf("%d", &codBusca);
	getchar();

	while(fgets(buffer, MAX_STR_X10, pont) != NULL){
		if(encontrado && strncmp(buffer, "\n", 1) == 0) {
			confirmado = false;
		}

		if(sscanf(buffer, "Cod: %d", &cod) == 1 && cod == codBusca){
			encontrado = true;
			printf("\nEncontrado:\n%s", buffer);
			while(fgets(buffer, MAX_STR_X10, pont) && strncmp(buffer, "\n", 1) != 0){
				printf("%s", buffer);
			}
			char confirma;
			do {
				printf("\nDeseja realmente excluir? (s/n): ");
				scanf(" %c", &confirma);
				getchar();

				if(confirma == 's' || confirma == 'S'){
					confirmado = true;
					validar = 1;
					break;
				} else if(confirma == 'n' || confirma == 'N'){
					validar = 2;
					break;
				} else {
					printf("\nOpcao invalida\n");
				}
			} while(true);
		}

		if(!encontrado || !confirmado) {
			fprintf(temp, "%s", buffer);
		}
	}

	fclose(pont);
	fclose(temp);
	system("cls");
	if(validar == 1){
		remove("cadprojeto.txt");
		rename("temp.txt", "cadprojeto.txt");
		printf("Projeto excluida com sucesso!\n");
	} else if(validar == 2){
		remove("temp.txt");
	}else{
		remove("temp.txt");
		printf("Codigo nao encontrado.\n");
	}
}
void exclusaoDoacao(menuInfoStruct*a){
	FILE *pont, *temp;
	char buffer[MAX_STR_X10];
	int cod, codBusca, validar = 0;
	bool encontrado = false, confirmado = false;

	pont = fopen("caddoacao.txt", "r");
	if(pont == NULL){
		printf("\nErro ao acessar o arquivo!!\n");
		return;
	}

	temp = fopen("temp.txt", "w");
	if(temp == NULL){
		printf("\nErro ao criar arquivo temporario!!\n");
		fclose(pont);
		return;
	}

	printf("Digite o codigo da doacao: ");
	scanf("%d", &codBusca);
	getchar();

	while(fgets(buffer, MAX_STR_X10, pont) != NULL){
		if(encontrado && strncmp(buffer, "\n", 1) == 0) {
			confirmado = false;
		}

		if(sscanf(buffer, "Cod: %d", &cod) == 1 && cod == codBusca){
			encontrado = true;
			printf("\nEncontrado:\n%s", buffer);
			while(fgets(buffer, MAX_STR_X10, pont) && strncmp(buffer, "\n", 1) != 0){
				printf("%s", buffer);
			}
			char confirma;
			do {
				printf("\nDeseja realmente excluir? (s/n): ");
				scanf(" %c", &confirma);
				getchar();

				if(confirma == 's' || confirma == 'S'){
					confirmado = true;
					validar = 1;
					break;
				} else if(confirma == 'n' || confirma == 'N'){
					validar = 2;
					break;
				} else {
					printf("\nOpcao invalida\n");
				}
			} while(true);
		}

		if(!encontrado && !confirmado) {
			fprintf(temp, "%s", buffer);
		}
	}

	fclose(pont);
	fclose(temp);
	system("cls");
	if(validar == 1){
		remove("caddoacao.txt");
		rename("temp.txt", "caddoacao.txt");
		printf("Doacao excluida com sucesso!\n");
	} else if(validar == 2){
		remove("temp.txt");
	}else{
		remove("temp.txt");
		printf("Codigo nao encontrado.\n");
	}
}

//----------FIM DE EXCLUSAO----------//



//----------ALTERAR----------//

void alterarVoluntario(menuInfoStruct *a){
    FILE *pont, *temp;
    char buffer[MAX_STR_X10];
    int cod, codBusca;
    bool encontrado = false, confirmado = false;

    pont = fopen("cadvoluntario.txt", "r");
    if(pont == NULL){
        printf("\nErro ao acessar o arquivo!!\n");
        return;
    }

    temp = fopen("temp.txt", "w");
    if(temp == NULL){
        printf("\nErro ao criar arquivo temporario!!\n");
        fclose(pont);
        return;
    }

    printf("Digite o codigo do voluntario: ");
    scanf("%d", &codBusca);
    getchar(); // Para consumir o '\n' remanescente no buffer de entrada

    while(fgets(buffer, MAX_STR_X10, pont) != NULL){
        if(sscanf(buffer, "Cod: %d", &cod) == 1){
            fprintf(temp, "%s", buffer); // Escreve o código no arquivo temporário
            if(cod == codBusca){
                encontrado = true;
                printf("\nEncontrado:\n%s", buffer);
				while(fgets(buffer, MAX_STR_X10, pont) && strncmp(buffer, "\n", 1) != 0){
					printf("%s", buffer);
				}
                fprintf(temp, "%s", buffer); // Escrever o nome no arquivo temporário

                // Perguntar se quer alterar
                char confirma;
                printf("\nDeseja realmente alterar? (s/n): ");
                scanf(" %c", &confirma);
                getchar();

                if(confirma == 's' || confirma == 'S'){
                    confirmado = true;

                    printf("Digite o novo numero de celular: ");
                    fgets(a->vol.cel, MAX_STR, stdin);
                    a->vol.cel[strcspn(a->vol.cel, "\n")] = 0;
                    fprintf(temp, "Celular: %s\n", a->vol.cel);

                    printf("Digite o novo email: ");
                    fgets(a->vol.email, MAX_STR, stdin);
                    a->vol.email[strcspn(a->vol.email, "\n")] = 0;
                    fprintf(temp, "Email: %s\n", a->vol.email);

                    // Pular as linhas antigas de celular e email no arquivo original
                    fgets(buffer, MAX_STR_X10, pont);
                    fgets(buffer, MAX_STR_X10, pont);
                    continue;
                } else {
                    // Se não for alterar, copia as informações antigas para o arquivo temporário
                    fprintf(temp, "%s", buffer); // Celular antigo
                    fgets(buffer, MAX_STR_X10, pont); // Ler linha de email
                    fprintf(temp, "%s", buffer); // Email antigo
                }
            } else {
                fprintf(temp, "%s", buffer); // Nome
                fgets(buffer, MAX_STR_X10, pont); // Ler linha de celular
                fprintf(temp, "%s", buffer); // Celular
                fgets(buffer, MAX_STR_X10, pont); // Ler linha de email
                fprintf(temp, "%s", buffer); // Email
            }
        } else {
            fprintf(temp, "%s", buffer);
        }
    }

    fclose(pont);
    fclose(temp);

    if(encontrado && confirmado){
        remove("cadvoluntario.txt");
        rename("temp.txt", "cadvoluntario.txt");
        printf("Informacoes do voluntario alteradas com sucesso!\n");
    } else if(encontrado && !confirmado){
        remove("temp.txt");
        printf("Alteracao cancelada.\n");
    } else {
        remove("temp.txt");
        printf("Codigo nao encontrado.\n");
    }
}


void alterarAnimal(menuInfoStruct *a){
	
}
void alterarEmpresa(menuInfoStruct *a){
	
}
void alterarProjeto(menuInfoStruct *a){
	
}
void alterarDoacao(menuInfoStruct*a){
	
}

//----------FIM DE ALTERAR----------//


//----------LANCAMENTOS----------//

void lancamentoHoras(menuInfoStruct *a){
    FILE *pontVol, *pontProj, *pontEmp, *pontLanc;
    
    bool encontrado;
    int codigo, codigo1, codigo2, codBusca, horas;
    char buffer[MAX_STR], buffer1[MAX_STR], buffer2[MAX_STR], buffer3[MAX_STR];

    pontVol = fopen("cadvoluntario.txt", "r");
    if(pontVol == NULL){
        printf("\nErro ao acessar o arquivo cadvoluntario.txt!\n");
        return;
    }
    
    do{
    	encontrado = false;
    	printf("\nDigite o codigo do voluntario: ");
		scanf("%d", &codBusca);
		getchar();
		rewind(pontVol);
	    while(fgets(buffer, MAX_STR, pontVol) != NULL){
	        if(sscanf(buffer, "Cod: %d", &codigo) == 1){
	            if(codigo == codBusca){
	                encontrado = true;
	                printf("\n%s", buffer); // Imprime o Código
	                fgets(buffer, MAX_STR, pontVol); // Nome
	                printf("%s", buffer); // Imprime o Nome
	                fgets(buffer3, MAX_STR, pontVol); // Celular
	                printf("%s", buffer3);
	                fgets(buffer3, MAX_STR, pontVol); // Email
	                printf("%s", buffer3);
	
	                break;
	            }
	        }
	    }
	
	    if(!encontrado){
	        printf("\nVoluntario com o codigo %d nao encontrado.\n", codBusca);
	    }
    }while(!encontrado);
    fclose(pontVol);


    pontProj = fopen("cadprojeto.txt", "r");
    if(pontProj == NULL){
        printf("Erro ao acessar o arquivo de projetos.\n");
        return;
    }
   do{
   		encontrado = false;
    	printf("\nDigite o codigo do projeto: ");
		scanf("%d", &codBusca);
		getchar();
		rewind(pontProj);
	    while(fgets(buffer1, MAX_STR, pontProj) != NULL){
	        if(sscanf(buffer1, "\nCod: %d", &codigo1) == 1){
	            if(codigo1 == codBusca){
	                encontrado = true;
	                printf("\n%s", buffer1); // Imprime o Código
	                fgets(buffer1, MAX_STR, pontProj); // Nome
	                printf("%s", buffer1); // Imprime o Nome
	                fgets(buffer3, MAX_STR, pontProj); // Celular
	                printf("%s", buffer3);
	                fgets(buffer3, MAX_STR, pontProj); // Email
	                printf("%s", buffer3);
	
	                break;
	            }
	        }
	    }
	
	    if(!encontrado){
	        printf("\nProjeto com o codigo %d nao encontrado.\n", codBusca);
	    }
    }while(!encontrado);
    fclose(pontProj);
    

    pontEmp = fopen("cadempresa.txt", "r");
    if(pontEmp == NULL){
        printf("Erro ao acessar o arquivo de empresas.\n");
        return;
    }
    do{
    	encontrado = false;
    	printf("\nDigite o codigo da empresa: ");
		scanf("%d", &codBusca);
		getchar();
		rewind(pontEmp);
	    while(fgets(buffer2, MAX_STR, pontEmp) != NULL){
	        if(sscanf(buffer2, "\nCod: %d", &codigo2) == 1){
	            if(codigo2 == codBusca){
	                encontrado = true;
	                printf("\n%s", buffer2); // Imprime o Código
	                fgets(buffer2, MAX_STR, pontEmp); // Nome
	                printf("%s", buffer2); // Imprime o Nome
	                fgets(buffer3, MAX_STR, pontEmp); // Celular
	                printf("%s", buffer3);
	                fgets(buffer3, MAX_STR, pontEmp); // Email
	                printf("%s", buffer3);
	
	                break;
	            }
	        }
	    }
	
	    if(!encontrado){
	        printf("\nVoluntario com o codigo %d nao encontrado.\n", codBusca);
	    }
    }while(!encontrado);
    fclose(pontEmp);

    printf("\nDigite o numero de horas trabalhadas: ");
    scanf("%d", &horas);
    getchar();

    pontLanc = fopen("lancamento.txt", "a");
    if(pontLanc == NULL){
        printf("Erro ao acessar o arquivo de lancamentos.\n");
        return;
    }

    fprintf(pontLanc, "Voluntario - Cod: %d - %sProjeto - Cod: %d - %sEmpresa - Cod: %d - %sHoras: %d\n", codigo, buffer, codigo1, buffer1, codigo2, buffer2, horas);
    fclose(pontLanc);

    printf("Lancamento realizado com sucesso.\n");
}

//----------FIM DE LANCAMENTOS----------//


//----------RELATORIO----------//

void relatorioVoluntario(menuInfoStruct *a){
    FILE *pontLanc;
    int codBusca, totalHoras = 0;
    int codigo, horas;
    char buffer[MAX_STR], nomeProjeto[MAX_STR], nomeEmpresa[MAX_STR];
    bool encontrado = false;

    pontLanc = fopen("lancamento.txt", "r");
    if (pontLanc == NULL) {
        printf("Erro ao acessar o arquivo de lancamentos.\n");
        return;
    }

    printf("\nDigite o codigo do voluntario para consulta: ");
    scanf("%d", &codBusca);
    getchar();

    while (fgets(buffer, MAX_STR, pontLanc) != NULL) {
        if (sscanf(buffer, "Voluntario - Cod: %d - %sProjeto - Cod: %*d - %sEmpresa - Cod: %*d - %sHoras: %d\n", &codigo, nomeProjeto, nomeEmpresa, &horas) != EOF) {
            if (codigo == codBusca) {
                encontrado = true;
                totalHoras += horas;
                printf("\nVoluntario - Cod: %d - %sProjeto - Cod: %*d - %sEmpresa - Cod: %*d - %sHoras: %d\n", codigo, nomeProjeto, nomeEmpresa, horas);
            }
        }
    }

    if (encontrado) {
        printf("\nTotal de horas trabalhadas pelo voluntario %d: %d\n", codBusca, totalHoras);
    } else {
        printf("\nVoluntario com o codigo %d nao encontrado.\n", codBusca);
    }

    fclose(pontLanc);
}

void relatorioEmpresa(menuInfoStruct *a){
	
}
void relatorioProjeto(menuInfoStruct *a){
	
}

//----------FIM DO RELATORIO----------//




