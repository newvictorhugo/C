#include <stdio.h>

main(){
	FILE *pont;
	int i;
	char curso[30];
	pont = fopen("Escrevercurso.txt", "w");
	if(pont==NULL){
		printf("Erro ao abrir o arquivo!!");
	}
	for(i=0;i<1;i++){
		printf("Digite o nome do seu curso: ");
		fgets(curso, sizeof(curso), stdin);
		fprintf(pont, "%s", curso);
	}
	fclose(pont);
}
