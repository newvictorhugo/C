#include<stdio.h>

main()
{
	int nf, cod, quant, quant_total, maior_qt, menor_qt, maior_prc, menor_prc, menor_venda=99999, cod_ma, nf_metotal, cod_mapreco, cod_mepreco, cod_me, cod_metds;
	float precou, total, total_nf, total_vendas=0;
	
	printf("\nNota Fiscal:");
	scanf("%d",&nf);
	while(nf!=0)
	{
		total_nf=0;
		maior_qt=0;
		menor_qt=99999;
		maior_prc=0;
		menor_prc=99999;
		quant_total=0;
		
		printf("\nCod. Produto:");
		scanf("%d",&cod);
		while(cod!=0)
		{
			printf("\nQuant.:");
			scanf("%d",&quant);
			printf("\nPreco unit.:");
			scanf("%f",&precou);
			
			if(quant>maior_qt){
				maior_qt=quant;
				cod_ma=cod;
			}
			
			if(quant<menor_qt){ //(d)
				menor_qt=quant;
				cod_me=cod;
			}
			
			if(precou<menor_prc){
				menor_prc=precou;
				cod_mepreco=cod;//(e)
			}
			if(precou>maior_prc){//(f)
				maior_prc=precou;
				cod_mapreco=cod;
			}
			quant_total+=quant;//(g)
			total=quant*precou;
			printf("\nTotal: %.2f",total);
			total_nf=total_nf+total;
			printf("\nCod. Produto:");
		    scanf("%d",&cod);
		    
		}
		if(quant_total<menor_venda){//(g)
			menor_venda=quant_total;
			nf_metotal=nf;
		}
		printf("\nTotal da Nota: %.2f",total_nf);
		total_vendas=total_vendas+total_nf;
		
		printf("\nO prod. com a maior quant. vend. %d",cod_ma);
		printf("\nO prod. com o menor preco vend. %d",cod_mepreco);//(e)
		
		printf("\nNota Fiscal:");
	    scanf("%d",&nf);
	} 
	printf("\nTotal de todas as notas: %.2f",total_vendas);
	printf("\nO produto com menor quantidade vendida entre todas as notas e: %d", cod_me); // (d)
	printf("\nO prod. com o maior preco vend. %d",cod_mapreco);//(f)
	printf("\nA nota fiscal que teve a menor venda e: %d", nf_metotal);//(g)
}
