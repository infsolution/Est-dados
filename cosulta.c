#include<stdio.h>;
#include<stdlib.h>;
struct aluno{
	int mat;
	float nota;
	char nome[30];
}

int procura(int mat){
	int achou =-1;
	int i;
	for(i=0;i<pos;i++){
		if(mat==v[i].mat){
			achou=i;
			break;
		}
	}
	return achou;
}
void mostra(int p){
	
}
void conusltaMat(){
	int matriculaProcu;
	printf("Digite a matricula procurada.");
	scanf("%d",&matriculaProcu);
	int p = busca(matriculaProcu);
	if(p!=-1)
		mostra(p);
	else
	{
		printf("matricual nao encontrada");
	}	
}

int main(int argc, char** argv)
{
	
	return 0;
}