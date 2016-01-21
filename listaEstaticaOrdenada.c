#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno{
	char nome[20];
	int matricula;
	float nota;
};typedef struct aluno Aluno;
const int max=5;
int qa,op,i,j;
Aluno alunos[5];
Aluno UmAluno;
void incluir(){
	int nAlu;
	printf("Informe o numero de alunos a cadastrar:\n");
	scanf("%d",&nAlu);	
	if(qa<max){	
	for(i=0;i<nAlu;i++){
	fflush(stdin);
	printf("\nInforme o nome do aluno: ");
	fgets(alunos[qa].nome,255,stdin);
	printf("\nInforme a matricula do aluno: ");
	scanf("%d",&alunos[qa].matricula);
	qa++;
	printf("\nAluno inserido com sucesso.\n");
	}
	}else{
		printf("\nNao e possivel inserir.\n");
	}
	ordenar();
	}
	void ordenar(){
		int troca;
		for(i=qa-1;i>=1;i--){
			troca = 0;
			for(j=0;j<i;j++){
				if(alunos[j].matricula>alunos[j+1].matricula){
					UmAluno=alunos[j];
					alunos[j]=alunos[j+1];
					alunos[j+1]=UmAluno;
					troca=1;			   					
				}
			}
			if(troca==0)
				break;
		}
	}
	int procurar(){
	int i,posi=-1,matri;
	printf("\nInforme o numero da matricula: \n");
	scanf("%d",&matri);
	for(i=0;i<qa;i++){
	if(matri<alunos[0].matricula){
		printf("Aluno nao encontrado.");
		break;
	}	
		if(matri>alunos[qa-1].matricula){
		printf("Aluno nao encontrado.");
		break;
	}
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
		ordenar();
}
	void mostrar(){
		for(i=0;i<qa;i++){
			printf("\nNome: %s",alunos[i].nome);
	   	   	printf("Matricula: %d",alunos[i].matricula);
		}
}
int tamanhoLista(){
	return qa;
}

	
void buscaBinaria(){
	
}

int main(int argc, char** argv)
{
	
	int opc=0;
while(opc!=9){
	printf(" \nInforme uma opcao: \n01-incluir aluno;\n02- exibir alunos;\n03- procurar um aluno;\n");
	printf("04- deletar aluno;\n05- mostrar tamanho da lista;\n09- sair\n");
	scanf("%d",&opc);
	if(opc==1){
		incluir();
	}
	if(opc==2){
		mostrar();	
	}
	if(opc==3){
		int resMat;
		resMat=procurar();
		if(resMat<0){
		printf("\n");	
		}else{
		printf("O aluno procurado eh:\n");
		printf("\n%s",alunos[resMat].nome);
		printf("\n%d\n",alunos[resMat].matricula);
		}
		
		
	}if(opc==4){
		removeAluno();
	}
	if(opc==5){
		if(tamanhoLista()>1)
		printf("\nA lista possui %d elementos.\n",tamanhoLista());
		if(tamanhoLista()<1)
			printf("\nA lista possui %d elemento.\n",tamanhoLista());
	}
}
}