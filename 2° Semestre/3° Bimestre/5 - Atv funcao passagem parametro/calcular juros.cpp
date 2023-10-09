#include<stdio.h>

struct infoBase{
	float saldoBase;
	float juros;
};

void exibir(struct infoBase *b){
	
	printf("\nInsira o saldo base: ");
	scanf("%f", &b->saldoBase);
	printf("\nJuros em porcentagem: ");
	scanf("%f", &b->juros);
	
}
float calcular(struct infoBase *b){
	float novoSaldo = 0;
	
	novoSaldo= b->saldoBase+(b->saldoBase*(b->juros/100));
	
	return novoSaldo;
}



int main(){
	struct infoBase b;
	float novoSaldo;
	
	exibir(&b);
	novoSaldo = calcular(&b);
	b.saldoBase = novoSaldo;
	
	printf("\nNovo saldo: %5.2f", b.saldoBase);
	printf("\nTotal de juros: %5.2f%%", b.juros);
	
	
}
