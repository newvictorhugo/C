#include<stdio.h>
main()
{
	FILE *pont;
	char nome[30], prof[30];
	int i,qtdvog=0;
	pont=fopen("alfa.txt","a");
	if(pont==NULL)
	  printf("Erro no arquivo");
	printf("Seu nome: ");
	fgets(nome,29,stdin);
	for(i=0;nome[i]!='\0';i++)
	{
		if(nome[i]=='a'||nome[i]=='e'||nome[i]=='i'||nome[i]=='o'||nome[i]=='u'){
			qtdvog++;
			fputc(nome[i], pont);
		}
	}
	qtdvog=0;
	printf("Nome da professora: ");
	fgets(prof,29,stdin);
	for(i=0;prof[i]!='\0';i++)
	{
		if(prof[i]=='a'||prof[i]=='e'||prof[i]=='i'||prof[i]=='o'||prof[i]=='u'){
			qtdvog++;
			fputc(prof[i], pont);
		} 
	}
    fclose(pont);
}
