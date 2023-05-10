#include <stdio.h>
#include <string.h>

main(){
	int i=0, j, vezes=0;
	char frase[50], palavra[10];
	
	printf("Digite a FRASE: ");
	gets(frase);
	printf("Digite a PALAVRA: ");
	gets(palavra);
	
	j=0;
	for(i=0; frase[i]!='\0';i++){
		if(palavra[j] == frase[i]){
			j++;
			if(palavra[j] == '\0'){
				vezes ++;
				j=0;
			}
		}
	}
	printf("%d", vezes);
}
