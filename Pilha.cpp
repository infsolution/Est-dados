#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

class No{
	public:
		char c;
		No *prox;
		No(char n){
			c=n;
			prox=NULL;
		}
};

class Pilha{
	public:
	No *topo;
	Pilha(){
		topo=NULL;
	}
	
	void mostrar(){//MOSTRA A PILHA
	No *atual=topo;
	if(topo==NULL){
		printf("A pilha esta vazia.\n");
	}else{
	
	while(atual != NULL){
		printf("Nome: %c\n",atual->c);
		atual=atual->prox;
	}}
}
	void push(char n){
		No *novo = new No(n);
		if(topo==NULL){
			topo=novo;
		}else{
			novo->prox=topo;
			topo=novo;
	}
	}
	void pop(){
	No *atual=topo;
	topo=topo->prox;
	free(atual);
}
	int isVazia(Pilha *p){
	return (p->topo==NULL);	
	}
	void destroi(Pilha *p){
		No *atual=topo;
		if(isVazia(p)){
			printf("A pilha esta vazia\n");
		}else{
			while(atual !=NULL){
				atual=atual->prox;
				pop();
			}
		}
	}
};
int main(){
	Pilha *p = new Pilha();
	p->mostrar();
	int v = p->isVazia(p);
		p->destroi(p);
	printf("%d\n",v);
	p->push('y');
	p->push('x');
	p->push('z');
	p->push('w');
	p->mostrar();
	p->pop();
	printf(">>>pop<<<\n");
	p->mostrar();
	p->destroi(p);
	p->mostrar();
	return 0;
}
