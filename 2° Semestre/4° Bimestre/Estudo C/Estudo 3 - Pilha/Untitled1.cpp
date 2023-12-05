#include <stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100

typedef struct{
	int items[MAX_SIZE];
	int top;
}stack;

void initializeStack(stack *a){
	a->top = -1;
}

//Verifica se a pilha está cheia
int isFull(stack *a){
	return a->top == MAX_SIZE - 1;
}

//Verifica se a pilha está vazia
int isEmpty(stack *a){
	return a->top == -1;
}

//Adicionar um elemento na pilha
void push(stack *a, int indice){
	a->items[++a->top] = indice;
	if(isFull(a)){
		printf("Pilha cheia!!/n");
		return;
	}
}

//Remove um elemento na pilha
int pop(stack *a){
	return a->items[a->top--];
	if(isEmpty(a)){
		printf("Pilha vazia!!");
	}
}
//Visualiza o elemento do topo da pilha
int peek(stack *a){
	return a->items[a->top];
	
}

int menu(){
	int opcao;
	printf("\n\n1 - Adicionar elemento\n");
	printf("2 - Remover elemento\n");
	printf("3 - Elemento do topo\n");
	printf("4 - Tamanho da pilha\n");
	printf("5 - Maior elemento\n");
	printf("6 - Soma dos elementos da pilha\n");
	printf("7 - Qntd num par e positivo\n");
	printf("8 - Media dos elementos da pilha\n");
	printf("9 - Elementos multiplos de 3 da pilha\n");
	printf("0 - Sair\n");
	scanf("%d", &opcao); getchar();
	return opcao;
}

int maior(int valor){
	
}

int main(){
	int opcao, valor, tamanho=0, soma=0, qntpar=0, media, qntmult3=0, tl=0, maior = 0;;
	stack a;
	initializeStack(&a);
	
	do{
		opcao = menu();
		switch(opcao){
			case 1:
				printf("\nInsira o valor: ");
				scanf("%d", &valor);
				push(&a, valor);
				printf("\nValor do topo: %d", peek(&a));
				tamanho++;
				soma += valor;
				if(valor % 2 == 0){
					qntpar++;
				}
				if(valor % 3 == 0){
					qntmult3++;
				}
				a.items[tl]==valor;
				tl++;
				break;
				
			case 2:
				printf("\nElemento %d excluido!!\n", peek(&a));
				soma-=peek(&a);
				if(peek(&a)%2 == 0){
					qntpar--;
				}
				if(valor % 3 == 0){
					qntmult3--;
				}
				a.items[tl]==a.items[tl-1];
				tl--;
				pop(&a);
				tamanho--;
				system("pause");
				break; 
				
			case 3:
				printf("\nElemento %d esta no topo!!\n", peek(&a));
				system("pause");
				break;
				
			case 4:
				printf("\nTamanho da pilha: %d\n", tamanho);
				break;
				
			case 5:
				for(int i=0;i<tl;i++){
					if(a.items[i]>maior){
						maior = a.items[i];
					}
				}
				printf("\nO maior elemento e %d\n", maior);
				system("pause");
				system("cls");
				break;
				
			case 6:
				printf("\nSoma dos elementos da pilha: %d\n", soma);
				system("pause");
				break;
				
			case 7:
				printf("\nQuantidade de numeros pares e positivos: %d\n", qntpar);
				system("pause");
				break;
				
			case 8:
				media = soma/tamanho;
				printf("\nMedia dos elementos da pilha: %d\n", media);
				system("pause");
				break;
				
			case 9:
				printf("Elementos multiplos de 3: %d", qntmult3);
				break;
				
			case 0:
				printf("\nFinalizado!!\n");
				break;
				
			default:
				printf("\nOpcao invalida!!\n");
		}
	}while(opcao!=0);
	
	
}
