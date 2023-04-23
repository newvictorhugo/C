#include <stdio.h>
#include <ctype.h>

main(){
	int aluno, termo, idade, numaluno=0, somaidade=0, contidade=0;
	float mediaidade;
	char sexo;
	
	for(aluno=1;aluno<=300;aluno++){
		
		printf("Insira seu Termo: \n");
		scanf("%d", &termo);
		
		printf("Insira sua idade: \n");
		scanf("%d", &idade);
		
		printf("M - Masculino \n");
		printf("F - Feminino \n");
		printf("Insira seu genero: \n");
		fflush(stdin);
		scanf("%c", &sexo);
		sexo = toupper(sexo);
		
		if(termo=1){
			numaluno++;
		}
		if(sexo='F'){
			somaidade+=idade;
			contidade++;
			
		}
	}
	mediaidade = somaidade/contidade;
	printf("A quantidade de alunos do primeiro termo inscritos e: %d \n", numaluno);
	printf("A media de idade dos inscritos do sexo feminino e: %5.2f \n", mediaidade);
}
