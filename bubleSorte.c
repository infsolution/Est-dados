#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int v[7];
void buble(int quant,*v){
	int i,j,troca,aux;
	for(i=quant-1;i>=1;i--){
		troca=0;
		for(j=0;j<i;j++){
			if(v[j]>v[j+1]){
				aux = v[j];
				v[j]=v[j+1];
				v[j+1]=aux;  
			   troca=1;	
			}
			
		}
		if(troca==0)
			break;
	}
}