#include<stdio.h>
main()
{
	int cr, maiorcr, quant, quanttotal=0, maiorqt, menorprecou;
	float precou,totalpar,totalcr,maiortotaltr=0;
	char cor, corma, corme;
	
	printf("\nCod. de Roupa:");
	scanf("%d",&cr);
	while(cr!=0)
	{
	  totalcr=0;
	  maiorqt=0;
	  menorprecou=99999;
	  printf("\nCor: ");
	  fflush(stdin);
	  scanf("%c",&cor);	
	  while(cor!='Z')
	  {
	  	printf("\nQuant.: ");
	  	scanf("%d",&quant);
	  	printf("\nPreco unit.: ");
	  	scanf("%f",&precou);
	  	totalpar=quant * precou;
	  	printf("\nTotal Parcial: %.2f\n",totalpar);
	  	totalcr+=totalpar;
	  	
	  	quanttotal+=quant;
	  	
	  	if(quant>maiorqt){
	  		maiorqt=quant;
	  		corma=cor;
	  	}
	  	if(precou<menorprecou){
	  		menorprecou=precou;
	  		corme=cor;
	  	}
	  	
	  	printf("\nCor: ");
	  	fflush(stdin);
	    scanf("%c",&cor);	
	  }	
	  if(totalcr>maiortotaltr){
	  	maiortotaltr=totalcr;
	  	maiorcr=cr;
	  }
	  
	  printf("\nTotal: %.2f\n",totalcr);
	  printf("\nQuantidade total de tipos de roupas: %d", quanttotal);
	  printf("\nA cor que obteve a maior quantidade vendida: %c", corma);
	  printf("\nA cor que tem o menor preco unitario: %c", corme);
	  printf("\nCod. da Roupa:");
	  scanf("%d",&cr);	
	}
	printf("\nO tipo de roupa que obteve o maior total: %d", maiorcr);
	

	
}
