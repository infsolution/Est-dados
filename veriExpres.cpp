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
	void verifExpr(char expres[20]){
	char le;	
	int i=0,j;
	while(expres[i]!='\0'){
		le=achaFlag(expres[i]);
		i++;
		printf("%c\n",le);
	}
	}
	char achaFlag(char l){
		char abri[3];
		char fecha[3];
		strcpy(abri,"{[(");
		strcpy(fecha,"}])");
		int i;
		for(i=0;i<3;i++){
			if(abri[i]==l){
				return abri[i];
				break;
			}
		}
	}
};
int main(){
	Pilha *p = new Pilha();
	p->verifExpr("if(a==b){b=a};");
	//p->mostrar();
	return 0;
}
