#include <stdio.h>
#include <stdlib.h>
	struct teste{
	int numero;
	char nome[10];
};typedef struct teste testNome;

void entrada(testNome tnome){
	scanf("%d",&tnome.numero);
	scanf("%s",&tnome.nome);
}
void printTeste(testNome tnome){
	char nome[30];
	printf("%d",tnome.numero);
	printf("%s",tnome.nome);
}
int main(int argc, char** argv)
{


	testNome ttnom[2];
	entrada(ttnom[0]);
	printTeste(*ttnom[0]);
	return 0;
}
