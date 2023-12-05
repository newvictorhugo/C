#include<stdio.h>
#include<string.h>
#include<windows.h>
#define MAX_STR 100
typedef struct{
	int dia, mes, ano;
}data;
typedef struct{
	char nome[MAX_STR], fone[MAX_STR], email[MAX_STR], tiposangue[5];
}info;
typedef struct{
	data c;
	info b;	
}agenda;

int menu(){
	int opcao;
	printf("\n1 - Adicionar contato\n");
	printf("2 - Remover contato\n");
	printf("3 - Listar contato\n");
	printf("4 - Alterar contato\n");
	printf("5 - Consultar por nome\n");
	printf("0 - Sair\n");
	printf("\nOpcao: ");
	scanf("%d", &opcao);
	getchar();		
	return opcao;
}
/////////////////////////////////////////////////////BUSCAR/////////////////////////////////////////////////////
int buscar(FILE *pont, char nome[]){
	agenda a;
	rewind(pont);
	while(fread(&a, sizeof(agenda), 1, pont) == 1){
		if(strcmp(nome, a.b.nome)==0){
			return ftell(pont) - sizeof(agenda);
		}
	}
	return -1;
}
/////////////////////////////////////////////////////CADASTRAR/////////////////////////////////////////////////////
void cadastrar(agenda a){
	char continuar;
	FILE *pont;
	pont = fopen("agenda.bin", "ab");
	if(pont == NULL){
		printf("Erro ao acessar!!\n");
	}
	else{
		do{
			printf("\nNome: ");
			gets(a.b.nome);
			fflush(stdin);
			printf("Data de nascimento(dd/mm/aaaa): ");
			scanf("%d/%d/%d", &a.c.dia, &a.c.mes, &a.c.ano);
			getchar();
			printf("Fone: ");
			gets(a.b.fone);
			fflush(stdin);
			printf("Email: ");
			gets(a.b.email);
			fflush(stdin);
			printf("Tipo sanguineo: ");
			gets(a.b.tiposangue);
			fflush(stdin);
			
			fwrite(&a, sizeof(agenda), 1, pont);
			printf("\nContinuar?: ");
			scanf("%c", &continuar);
			getchar();
		}while(continuar!='n');
	}
	fclose(pont);
}
/////////////////////////////////////////////////////REMOVER/////////////////////////////////////////////////////
void remover(agenda a){
	char continuar, nome[MAX_STR];
	int pos;
	FILE *pont;
	pont = fopen("agenda.bin", "rb");
	if(pont == NULL){
		printf("Erro ao acessar!!\n");
	}
	else{
		printf("\nDigite o nome(<ENTER> para sair): ");
		fgets(nome, MAX_STR, stdin);
   		nome[strcspn(nome, "\n")] = 0;
		if(strcmp(nome, "\0") !=0 ){
			pos=buscar(pont,nome);
			if(pos == -1){
				printf("\nNome nao encontrado!!\n");
			}
			else{
				fseek(pont, pos, 0);
				fread(&a, sizeof(agenda), 1, pont);
				printf("\nNome: %s", a.b.nome);
				printf("\nData de nascimento: %d/%d/%d", a.c.dia, a.c.mes, a.c.ano);
				printf("\nFone: %s", a.b.fone);
				printf("\nEmail: %s", a.b.email);
				printf("\nTipo sanguineo: %s", a.b.tiposangue);
				printf("\n\nDeseja excluir o registro?(s/n): ");
				scanf("%c", &continuar);
				getchar();
				if(continuar == 's'){
				    FILE *temp;
				    temp = fopen("temporario.bin", "wb");
				    if(temp == NULL){
				        printf("Erro ao criar arquivo temporário!\n");
				        fclose(pont);
				        return;
				    }
				    rewind(pont);
				    while(fread(&a, sizeof(agenda), 1, pont) == 1){
				        if(strcmp(nome, a.b.nome) != 0){
				            fwrite(&a, sizeof(agenda), 1, temp);
				        }
				    }
				    fclose(pont);
				    fclose(temp);      
				    remove("agenda.bin");
				    rename("temporario.bin", "agenda.bin");
				    printf("\nContato '%s' excluido!!\n", nome);
				}
			}
		}
		
	}
	fclose(pont);
	system("pause");
}
/////////////////////////////////////////////////////LISTAR/////////////////////////////////////////////////////
void listar(agenda a){
	FILE *pont;
	pont = fopen("agenda.bin", "rb");
	if(pont == NULL){
		printf("Erro ao acessar!!\n");
	}
	else{
		while(fread(&a, sizeof(agenda), 1, pont)==1){
			printf("\nNome: %s", a.b.nome);
			printf("\nData de nascimento: %d/%d/%d", a.c.dia, a.c.mes, a.c.ano);
			printf("\nFone: %s", a.b.fone);
			printf("\nEmail: %s", a.b.email);
			printf("\nTipo sanguineo: %s", a.b.tiposangue);
			printf("\n------------\n\n");
		}
	}
	fclose(pont);
	system("pause");
}
/////////////////////////////////////////////////////ALTERAR/////////////////////////////////////////////////////
void alterar(agenda a){
	char nome[MAX_STR];
	int pos, opcao;
	FILE *pont;
	pont = fopen("agenda.bin", "rb+");
	if(pont == NULL){
		printf("Erro ao acessar!!\n");
	}
	else{
		printf("\nDigite o nome(<ENTER> para sair): ");
		fgets(nome, sizeof(nome), stdin);
   		nome[strcspn(nome, "\n")] = 0;
   		if(strcmp(nome, "\0")!=0){
   			pos=buscar(pont, nome);
   			if(pos == -1){
   				printf("Contato nao encontrado!!\n");
   			}
   			else{
   				fseek(pont, pos, 0);
   				fread(&a, sizeof(agenda), 1, pont);
   				printf("\nNome: %s", a.b.nome);
				printf("\nData de nascimento: %d/%d/%d", a.c.dia, a.c.mes, a.c.ano);
				printf("\nFone: %s", a.b.fone);
				printf("\nEmail: %s", a.b.email);
				printf("\nTipo sanguineo: %s", a.b.tiposangue);
				printf("\n\nO que deseja alterar?\n");
				printf("1 - Data de nascimento\n");
				printf("2 - Fone\n");
				printf("3 - Email\n");
				printf("4 - Tipo sanguineo\n");
				printf("0 - Nenhum\n");
				printf("Opcao: ");
				scanf("%d", &opcao);
				getchar();
				switch(opcao){
					case 1:
						printf("\nNova data de nascimento(dd/mm/aaaa): ");
						scanf("%d/%d/%d", &a.c.dia, &a.c.mes, &a.c.ano);
						fseek(pont, pos, 0);
						fwrite(&a, sizeof(agenda), 1, pont);
						printf("\nData de nascimento alterado!!\n");
						fclose(pont);
						system("pause");
						break;
					case 2:
						printf("\nNovo fone: ");
						fgets(a.b.fone, sizeof(a.b.fone), stdin);
						a.b.fone[strcspn(a.b.fone, "\n")]=0;
						fseek(pont, pos, 0);
						fwrite(&a, sizeof(agenda), 1, pont);
						printf("\nFone alterado!!\n");
						fclose(pont);
						system("pause");
						break;
					case 3:
						printf("\nNovo email: ");
						fgets(a.b.email, sizeof(a.b.email), stdin);
						a.b.email[strcspn(a.b.email, "\n")]=0;
						fseek(pont, pos, 0);
						fwrite(&a, sizeof(agenda), 1, pont);
						printf("\nEmail alterado!!\n");
						fclose(pont);
						system("pause");
						break;
					case 4:
						printf("\nNovo tipo sanguineo: ");
						fgets(a.b.tiposangue, sizeof(a.b.tiposangue), stdin);
						a.b.tiposangue[strcspn(a.b.tiposangue, "\n")]=0;
						fseek(pont, pos, 0);
						fwrite(&a, sizeof(agenda), 1, pont);
						printf("\nEmail alterado!!\n");
						fclose(pont);
						system("pause");
						break;
					case 0:
						break;
					default:
					printf("Opcao invalida!!\n");
				}
			}
   		}
	}
}
/////////////////////////////////////////////////////MAIN/////////////////////////////////////////////////////
int main(){
	int opcao;
	agenda a;
	FILE *pont;
	do{
		system("cls");
		opcao = menu();
		switch(opcao){
			case 1:
				system("cls");
				cadastrar(a);
				break;
				
			case 2:
				system("cls");
				remover(a);
				break;
				
			case 3:
				system("cls");
				listar(a);
				break;
				
			case 4:
				system("cls");
				alterar(a);
				break;
				
			case 5:	
				system("cls");
				
				break;
				
			case 0:
				printf("Sistema finalizado!!!\n");
				break;
				
			default:
				printf("Opcao Invalida!!\n");
		}
	}while(opcao!=0);
}

