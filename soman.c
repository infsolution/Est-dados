#include <stdio.h>
#include <stdlib.h>
int somaDeNInt(int n){
	if(n<=1){
		return n;
	}else{
	return n+somaDeNInt(n-1);	
	}
}
int main(int argc, char** argv){
	int num;
	scanf("%d",&num);
	printf("%d",somaDeNInt(num));
	return 0;
}