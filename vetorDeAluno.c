#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno{
	char nome[20];
	int matricula;
};typedef struct aluno Aluno;
const int max=3;
int qa,op;
Aluno alunos[3];
void incluir(Aluno *alun){
	if(qa<max){	
	fflush(stdin);
	printf("\nInforme o nome do aluno: ");
	fgets((*alun).nome,255,stdin);
	printf("\nInforme a matricula do aluno: ");
	scanf("%d",&(*alun).matricula);
	qa++;
	printf("\nAluno inserido com sucesso.\n");
	}else{
		printf("\nNao e possivel inserir.\n");
	}
	
}
void mostrar(Aluno *alun){
	printf("\n%s",(*alun).nome);
	printf("%d",(*alun).matricula);
}
int procurar(){
	int i,posi=-1,matri;
	printf("\nInforme o numero da matricula: \n");
	scanf("%d",&matri);
	for(i=0;i<qa;i++){
	if(matri==alunos[i].matricula){
		posi=i;
		break;
	}	
	}
	return posi;
}
void removeAluno(){
	int item=procurar();
	int resp;
	if(item<0){
		printf("indice inexistente");
	}else{
		printf("Voce deseja remover o aluno: %s?(1-sim/2-nao)\n",alunos[item].nome);
		scanf("%d",&resp);
		if(resp==1){
			alunos[item]=alunos[qa-1];
			qa--;
			printf("O aluno foi excluido com sucesso.\n");
		}else{printf("O aluno nao foi excluido.\n");}
	}
}
void mostraAluno(int pos){
	if(pos<0){
		printf("\nAluno nao encontrado.\n");}
	else{
		printf("\nNome: %s",alunos[pos].nome);
		printf("Matricula: %d\n",alunos[pos].matricula);
		}
}

int main(int argc, char** argv)
{
	
	int opc=0;
while(opc!=9){
	printf(" \nInforme uma opcao: \n01-incluir aluno\n02- exibir alunos.\n03- procurar\n");
	printf("04- deletar aluno\n09- sair\n");
	scanf("%d",&opc);
	if(opc==1){
		int nAlu;
		printf("Informe o numero de alunos a cadastrar: \n");
		scanf("%d",&nAlu);
		int i;
		for(i=0;i<nAlu;i++){
		incluir(&alunos[qa]);
		}
	}
	if(opc==2){
		int i;
		for(i=0;i<qa;i++){
		mostrar(&alunos[i]);
		}
	}
	if(opc==3){
		int matri,resMat;
		resMat=procurar(matri);
		mostraAluno(resMat);
		
	}if(opc==4){
		removeAluno();
	}
}
	
	return 0;
}
