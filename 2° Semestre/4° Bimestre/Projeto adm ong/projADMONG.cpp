#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<stdbool.h>

#define MAX_STR 100
#define MAX_STR_X5 500
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
	char vEmpresa[MAX_STR], marcacao[MAX_STR_X5], descricao[MAX_STR_X5];
}empresa;

typedef struct{
	int vProj[TF_PROJ], TLP = 0, cod_proj;
	char vDescricao[TF_PROJ][100];
}projeto;

typedef struct{
	int vCodDoa[TF_DOA], TLD = 0, cod_doa;
	char vInfoQuem[TF_DOA][100], vInfoOque[TF_DOA][100];
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

void cadastrarVoluntario(menuInfoStruct *a);
void cadastrarAnimal(menuInfoStruct *a);
void cadastrarEmpresa(menuInfoStruct *a);
void cadastrarProjeto(menuInfoStruct *a);
void cadastrarDoacao(menuInfoStruct*a);

void exclusaoVoluntario(menuInfoStruct *a);
void exclusaoAnimal(menuInfoStruct *a);
void exclusaoEmpresa(menuInfoStruct *a);
void exclusaoProjeto(menuInfoStruct *a);
void exclusaoDoacao(menuInfoStruct*a);

void alterarVoluntario(menuInfoStruct *a);
void alterarAnimal(menuInfoStruct *a);
void alterarEmpresa(menuInfoStruct *a);
void alterarProjeto(menuInfoStruct *a);
void alterarDoacao(menuInfoStruct*a);

int main(){
	menuInfoStruct a;
	int opcao, opcaoCad, opcaoExc, opcaoAlt;
	
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
							
							break;
							
						case 5:
							system("cls");
							
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
							
							break;
							
						case 2:
							system("cls");
							
							break;
							
						case 3:
							system("cls");
							
							break;
							
						case 4:
							system("cls");
							
							break;
							
						case 5:
							system("cls");
							
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
							
							break;
							
						case 2:
							system("cls");
							
							break;
							
						case 3:
							system("cls");
							
							break;
							
						case 4:
							system("cls");
							
							break;
							
						case 5:
							system("cls");
							
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
				
				break;
			
			case 5:
				system("cls");
				
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

    while(fgets(buffer, 255, pont) != NULL) {
        if(sscanf(buffer, "Cod: %d", &cod) == 1) {
            if(cod == codigo) {
                return true;
            }
        }
    }
    return false;
}

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
				
		fprintf(pont, "\nCod: %d\nNome: %s\nNascimento: %d/%d/%d\nSexo: %c\nEspecie: %s\nRaca: %s\nCastrado %c\n", a->ani.vNumAni[indice], a->ani.vAnimal, a->data.dia, a->data.mes, a->data.ano, a->ani.sexo, a->ani.especie, a->ani.raca, a->ani.castrado);
		
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
	FILE *pont;
	pont = fopen("arquivo.txt", "a");
	if(pont ==NULL){
		printf("\nErro ao acessar o arquivo!!\n");
		exit(1);
	}
	
	fclose(pont);
}
void cadastrarDoacao(menuInfoStruct*a){
	FILE *pont;
	pont = fopen("arquivo.txt", "a");
	if(pont ==NULL){
		printf("\nErro ao acessar o arquivo!!\n");
		exit(1);
	}
	
	fclose(pont);
}




