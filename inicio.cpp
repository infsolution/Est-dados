#include<stdio.h>
#include<stdlib.h>
struct aluno{
char nome[20];
int numero;

};typedef  struct aluno Aluno;

void incluir(Aluno alu){
	fgets(alu.nome,255,stdin);
	scanf("%d",&alu.numero);
	fflush(stdin);
}
void mostrar(Aluno alu){
	printf("\n%s",alu.nome);
	printf("%d\n",alu.numero);
}
int main(){
	Aluno alunos[2];
	int i;
	for(i=0;i<2;i++){
		incluir(alunos[i]);
	}
		printf("%s",alunos[1].nome);
		printf("%d",alunos[1].numero);
	return 0;
}

