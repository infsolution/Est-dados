int fatorial(int n){
	int fat =1;
	int i;
	for(i=1;i<=n;i++){
		fat=fat*i;
	}
	return fat;
}

main(){
	
	int num;
	printf("INFORME UM NUMEOR\n");
	scanf("%d",&num);
	printf("O valor do fatorial e = %d\n",fatorial(num));
}