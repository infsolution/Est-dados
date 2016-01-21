#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int quantTroca=0;
void buble(int quant,int *v){
	int i,j,troca,aux;
	for(i=quant-1;i>=1;i--){
		troca=0;
		for(j=0;j<i;j++){
			if(v[j]>v[j+1]){
				aux = v[j];
				v[j]=v[j+1];
				v[j+1]=aux;  
			   troca=1;
			   quantTroca++;	
			}
			
		}
		if(troca==0)
			break;
	}
}
void printVetor(int quant,int *v){
	int i;
	for(i=0;i<quant;i++){
		printf("\n Elemento da posicao %d: %d",i,v[i]);
	}
}

  int busca(int num, int *v, int elem){
	  int ini=0;
	  int fim=num-1;
	  while(ini<=fim){
		  int meio = (ini+fim)/2;
		  if(elem<v[meio])
		  	fim=meio-1;
		  else if(elem>v[meio])
		  	ini=meio+1;
		  else
		  	  return meio;
	  }
	  return -1;
  }
int main(int argc, char** argv)
{
	int v[]={8,7,5,2,9,6,4};
	buble(7,&v);
	printVetor(7,&v);
	printf("\nQuantidade de trocas: %d",quantTroca);
	int pos=busca(7,&v,9);
	if(pos!=-1)
		printf("\nO elemento foi encontrado- retorno: %d",pos);
	else 
		printf("\nNao encontrado- retorno: %d",pos);
	return 0;
}