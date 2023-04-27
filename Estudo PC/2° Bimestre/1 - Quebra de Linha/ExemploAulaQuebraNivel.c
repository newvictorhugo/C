#include<stdio.h>
main()
{
	int cr, quant, maiorqt, corma, menorqt, corme;
	float precou,totalpar,totalcr,totalvendas=0;
	char cor;
	
	printf("\nCod. de Roupa:");
	scanf("%d",&cr);
	while(cr!=0)
	{
	  totalcr=0;
	  maiorqt=0;
	  printf("\nCor");
	  scanf("%c",&cor);	
	  while(cor!='Z')
	  {
	  	printf("Quant.:\n");
	  	scanf("%d",&quant);
	  	printf("Preco unit.:\n");
	  	scanf("%f",&precou);
	  	totalpar=quant * precou;
	  	printf("Total Parcial: %.2f\n",totalpar);
	  	totalcr+=totalpar;
	  	
		if(quant>maiorqt)
	  	{
	  		maiorqt=quant;
	  		corma=cor;
	  	}
	  	if(quant<menorqt)
		{
	  		menorqt=quant;
	  		corme=cor
		}
	  	printf("\nCor:");
	    scanf("%c",&cor);	
	  }	
	  
	  printf("Total: %.2f\n",totalcr);

	  printf("O produto com a maior quantidade vendida %d\n",corma);
	  printf("o produto com a menor quantidade vendida: %d\n", corme);
	  
	  printf("\nCod. da Roupa:");
	  scanf("%d",&cr);	
	}
	

	
}
