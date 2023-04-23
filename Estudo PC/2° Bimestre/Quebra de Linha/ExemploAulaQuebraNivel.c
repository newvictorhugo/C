#include<stdio.h>
main()
{
	int nf, cod, quant, maiorqt, codma, menorqt, codme;
	float precou,total,totalnf,totalvendas=0;
	
	printf("\nNota Fiscal:");
	scanf("%d",&nf);
	while(nf!=0)
	{
	  totalnf=0;
	  maiorqt=0;
	  printf("\nCod. Produto:");
	  scanf("%d",&cod);	
	  while(cod!=0)
	  {
	  	printf("Quant.:\n");
	  	scanf("%d",&quant);
	  	printf("Preco unit.:\n");
	  	scanf("%f",&precou);
	  	total=quant * precou;
	  	printf("Total: %.2f\n",total);
	  	totalnf=totalnf+total;
	  	
		if(quant>maiorqt)
	  	{
	  		maiorqt=quant;
	  		codma=cod;
	  	}
	  	if(quant>menorqt)
		{
	  		menorqt=quant;
	  		codme=cod
		}
	  	printf("\nCod. Produto:");
	    scanf("%d",&cod);	
	  }	
	  
	  printf("Total da Nota: %.2f\n",totalnf);
	  totalvendas=totalvendas+totalnf;
	  
	  printf("O produto com a maior quantidade vendida %d\n",codma);
	  printf("o produto com a menor quantidade vendida: %d\n", codme);
	  
	  printf("\nNota Fiscal:");
	  scanf("%d",&nf);	
	}
	
	printf("Total de todas as Notas: %.2f\n",totalvendas);
	
}
