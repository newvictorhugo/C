#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int menu(){
	int opcao;
	
	printf("\n1-Cadastrar Contato\n");
	printf("2-Listar Contato\n");
	printf("3-Consultar o aniversariante do mes\n");
	printf("4-Alterar telefone de contato\n");
	printf("5-Excluir Contato\n");
	printf("0-Sair\n");
	printf("\nOpcao: ");
	scanf("%d", &opcao);
	getchar();
	return opcao;
}

typedef struct{
	int dia, mes, ano;
}data;

typedef struct{
	char nome[50], tel[30], email[50], tiposangue[5];
}contato;

typedef struct{
	data aniv;
	contato ctt;
}cadastrar;

void cadastrarContato(cadastrar *a);
void listarContato(cadastrar *a);
void consultarAniMes(cadastrar *a);

int main(){
	int opcao;
	cadastrar a;
	
	do{
		opcao = menu();
		switch(opcao){
			
			case 1:
				cadastrarContato(&a);
				break;
			
			case 2:
				listarContato(&a);
				break;
			
			case 3:
				
				break;
			
			case 4:
				
				break;
			
			case 5:
				
				break;
			
			case 0:
				printf("--Finalizado--\n");
				getchar();
				break;
				
			default:
				printf("Opcao invalida...");
		
		}
	}while(opcao != 0);
}

void cadastrarContato(cadastrar *a){
	char continuar;
	FILE *pont;
	pont = fopen("agenda.txt", "a");
	if(pont == NULL){
		printf("Erro ao abrir o arquivo!!!");
		exit(1);
	}
	do{
		printf("Nome: ");
		fgets(a->ctt.nome, sizeof(a->ctt.nome), stdin);
		a->ctt.nome[strcspn(a->ctt.nome, "\n")] = 0;
		
		printf("Telefone: ");
		fgets(a->ctt.tel, sizeof(a->ctt.tel), stdin);
		a->ctt.tel[strcspn(a->ctt.tel, "\n")] = 0;
		
		printf("Data de aniversario (dd/mm/aaaa): ");
		scanf("%d/%d/%d", &a->aniv.dia, &a->aniv.mes, &a->aniv.ano);
		getchar();
		
		printf("Email: ");
		fgets(a->ctt.email, sizeof(a->ctt.email), stdin);
		a->ctt.email[strcspn(a->ctt.email, "\n")] = 0;
		
		printf("Tipo sanguineo: ");
		fgets(a->ctt.tiposangue, sizeof(a->ctt.tiposangue), stdin);
		a->ctt.tiposangue[strcspn(a->ctt.tiposangue, "\n")] = 0;
		
		fprintf(pont, "Nome: %s\nTelefone: %s\nData de aniversario: %d/%d/%d\nEmail: %s\nTipo sanguineo: %s\n\n", a->ctt.nome, a->ctt.tel, a->aniv.dia, a->aniv.mes, a->aniv.ano, a->ctt.email, a->ctt.tiposangue);
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

void listarContato(cadastrar *a){
	FILE *pont;
	pont = fopen("agenda.txt", "r");
	if(pont == NULL){
		printf("Erro ao abrir o arquivo!!!");
		exit(1);
	}
	
	while(fscanf(pont, "Nome: %s\nTelefone: %s\nData de aniversario: %d/%d/%d\nEmail: %s\nTipo sanguineo: %s\n\n", a->ctt.nome, a->ctt.tel, &a->aniv.dia, &a->aniv.mes, &a->aniv.ano, a->ctt.email, a->ctt.tiposangue) != EOF){
		
		printf("Nome: %s\nTelefone: %s\nData de aniversario: %d/%d/%d\nEmail: %s\nTipo sanguineo: %s\n\n", a->ctt.nome, a->ctt.tel, a->aniv.dia, a->aniv.mes, a->aniv.ano, a->ctt.email, a->ctt.tiposangue);
	}
	
	fclose(pont);
}

void consultarAniMes(cadastrar *a){
	FILE *pont;
	pont = fopen("agenda.txt", "r");
	if(pont == NULL){
		printf("Erro ao abrir o arquivo!!!");
		exit(1);
	}
	
	
}
