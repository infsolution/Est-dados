#include <stdio.h>
main(){
	double pi=3.14159;
	double raio=0.0;
	double area=0.0;
	scanf("%lf",&raio);
	area = pi * (raio*raio);
	printf("A=%.4f\n",area);	
}