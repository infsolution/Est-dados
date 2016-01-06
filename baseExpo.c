#include <stdio.h>
#include <stdlib.h>
int expo(int x, int y){
	if(y==1){
		return x;
	}else if(y==0){
		return 1;
	}else{
		return x * expo(x,y-1); 
	}
}
int main(int argc, char** argv)
{
	int base;
	int expoente;
	scanf("%d",&base);
	scanf("%d",&expoente);
	printf("%d",expo(base, expoente));
	return 0;
}