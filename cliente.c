#include <stdio.h>
#include <stdlib.h>
struct cliente{
	char nome[20];
	int numeroCart;
	double saldo;
	double limite;
	struct Cliente *novo;
}clie;

void incluir(struct cliente clie){
	printf("Informe o nome do cliente.\n");
	fgets(clie.nome,255,stdin);
	printf("Informe o numero do cartao.\n");
	scanf("%d",&clie.numeroCart);
	printf("Informe o saldo: \n");
	scanf("%e",&clie.saldo);
	printf("Informe o Limite: ");
	scanf("%e",&clie.limite);
	fflush(stdin);
	
}
void printCliente(struct cliente cl){	
	printf("Nome do Cliente: %s",cl.nome);
	printf("Numero do Cartao: %d\n",cl.numeroCart);
	printf("Saldo: %.2lf\n",cl.saldo);
	printf("Limite: %.2lf\n", cl.limite);
}
void teste(){
	
}
int main(int argc, char** argv)
{
	int maiorLimte=0, indc;
	int menorSaldo=10000;
	struct cliente c1,c2,c3,c4,c5;
	struct cliente vetClie[5] = {c1,c2,c3,c4,c5};
	int i;
	incluir(c1);
	/*for(i=0;i<5;i++){
		incluir(vetClie[i]);
	}
	int f;
	for(f=0;f<5;f++){
		if(vetClie[i].limite > maiorLimte){
			maiorLimte=vetClie[i].limite;
			indc=f;
		}
		
	}
	printCliente(vetClie[indc]);
	indc=0;
	for(f=0;f<5;f++){
		if(vetClie[i].saldo < menorSaldo){
			menorSaldo=vetClie[i].saldo;
			indc=f;
		}
	}*/
	printCliente(c1);
	return 0;
}