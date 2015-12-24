#include <stdio.h>
#include <stdlib.h>
int contChar(char palavra[20], char letra,int i, int cont){	
	if(palavra[i]==letra){
		   cont++;	
		   contChar(palavra,letra,i+1,cont);
	}else if(palavra[i]=='\0'){
		return cont;
	}else{
		return contChar(palavra,letra,i+1,cont);
	}	
}
int main(int argc, char** argv)
{
	char palavra[100];
	char letra;
	fgets(palavra,255,stdin);
	scanf("%c",&letra);
	printf("%d",contChar(palavra,letra,0,0));
	return 0;
}