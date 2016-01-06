#include <stdio.h>
int main(){
	double a=0;
	double b=0;
	double c=0;
	double MEDIA;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	MEDIA = ((a*2.0)+(b*3.0)+(c*5.0))/10;
	printf("MEDIA = %.1f\n",MEDIA);
	return(0);
}