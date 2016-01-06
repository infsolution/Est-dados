int fatorial(int n){
	if(n==0){
	return 1;	
	}else if(n<0){
		printf("Nao ha fatorial de numero negativo.");
	}	
	else{
		return n*fatorial(n-1);
	}
}
int main(){
	int num;
	scanf("%d",&num);
	printf("o fatorial de %d e %d",num,fatorial(num));
	return 0;
}