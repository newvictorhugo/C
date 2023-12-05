#include<stdio.h>

#define MAX_SIZE 10

typedef struct{
	int items[MAX_SIZE];
	int front, rear;
}fila;

void inicializarQueue(fila *a){
	a->front = -1;
	a->rear = -1;
}

int isEmpty(fila *a){
	a->front == -1;
}

int isFull(fila *a){
	a->rear == MAX_SIZE -1;
}

int enqueue(fila *a, int indice){
	if(isEmpty(a)){
		a->front = 0;
	}
	a->items[++a->rear] = indice;
}

int dequeue(fila *a, int indice){
	if(a->)
}
