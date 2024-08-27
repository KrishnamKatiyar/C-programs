#include"stdio.h"
void main(){
	int t;
	float p,r,si;
	
	printf("Input principle : ");
	scanf("%f",&p);
	
	printf("Input rate : ");
	scanf("%f",&r);
	
	printf("Input time : ");
	scanf("%d",&t);
	
	si=(p*r*t)/100;
	
	printf("Simple interest wiil be %f",si);
}
