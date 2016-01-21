#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno{
	char nome[20];
	int matricula;
	float nota;
};typedef struct aluno Aluno;
void incluir(Aluno *alun){
	fflush(stdin);
	printf("Informe o nome do aluno:");
	fgets((*alun).nome,255,stdin);
	printf("Informe a matricula do aluno:");
	scanf("%d",&(*alun).matricula);
	printf("Informe a nota do aluno:");
	scanf("%f",&(*alun).nota);
	printf("\n");
	
}
void mostrar(Aluno *alun){
	if((*alun).nome!=NULL){
	printf("\n%s",(*alun).nome);
	printf("\n%d",(*alun).matricula);
	printf("\n%.2f",(*alun).nota);}
}

int main(int argc, char** argv)
{
	Aluno alunos[3];
	int opc=0;
while(opc!=3){
	printf(" Informe uma opcao: \n01-incluir aluno\n02- exibir alunos.\n03- sair\n");
	scanf("%d",&opc);
	if(opc==1){
		int nAlu;
		printf("Informe o numero de alunos a cadastrar:\n");
		scanf("%d",&nAlu);
		int i;
		for(i=0;i<nAlu;i++){
		incluir(&alunos[i]);
		}
	}
	if(opc==2){
		int i;
		for(i=0;i<3;i++){
		mostrar(&alunos[i]);
		}
	}

}
/*int i;
for(i=0;i<3;i++){
	incluir(&alunos[i]);
}
for(i=0;i<3;i++){
	mostrar(&alunos[i]);
}*/
	
	return 0;
}
