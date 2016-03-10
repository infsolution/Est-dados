#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

class No{
	public:
		int mat;
		char nome[25];
		No *prox;
		No *ante;
		No(int mt, char n[25]){
			mat=mt;
			strcpy(nome,n);
			prox=NULL;
			ante=NULL;
		}
};

class Lista{
	public:
	No *inicio;
	No *fim;
	Lista(){
		inicio=NULL;
		fim=NULL;
	}
	void addInicio(int m, char n[25]){//ADICIONA NO INICIO DA LISTA
		No *novo = new No(m,n);
		if(inicio==NULL){
			inicio=novo;
			fim=novo;
		}else{
			inicio->ante=novo;
			novo->prox=inicio;
			inicio=novo;
	}
	}
};
int main(){
	
	return 0;
}
