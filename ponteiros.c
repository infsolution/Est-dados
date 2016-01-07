#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	int a;
	printf("%d : a criado sem atribuir valor.\n",a);
	a =23;
	printf("%d : Valor atribuido a a\n",a);
	printf("%d : Endereco de a\n",&a);
	int *pt;
	printf("%d : pt criado sem atribuir valor\n",pt);
	pt=&a;
	printf("%d : Valor atribuido ao ponteiro = a.\n",*pt);
	int b = *pt;
	printf("%d : b recebe o valor contido no ponteiro pt(a)\n",b);
	printf("%d : Endereco de b\n",&b);
	*pt=46;
	printf("%d : Endereco do ponteiro pt\n",&pt);
	printf("%d : Valor contido no ponteiro pt(endereco de a)\n",pt);
	printf("%d : Novo valor de a\n",a);
	printf("%d : Endereco de a igual ao inicial\n",&a);
	return 0;
}