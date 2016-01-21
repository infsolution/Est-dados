#include <stdio.h>
#include <stdlib.h>
struct aluno{
	char nome[30];
	int matricula;
	double nota;
};typedef struct aluno Aluno;
void incluir(Aluno alun){
	printf("Informe o nome do Aluno.\n");
	fgets(alun.nome,255,stdin);
	//scanf("%s",alun.nome);
	printf("Informe o numero da matricula.\n");
	scanf("%d",&alun.matricula);
	printf("Informe a nota.\n");
	scanf("%lf",&alun.nota);	
	fflush(stdin);	
}
void printAluno(Aluno alun){	
	printf("\n%s",alun.nome);
	printf("\n%d",alun.matricula);
	printf("\n%g",alun.nota);
}

int main(int argc, char** argv)
{
	Aluno alunos[3];
	int i;
	//for(i=0;i<3;i++){
	incluir(alunos[0]);//}
	
	printAluno(alunos[0]);

	return 0;
}