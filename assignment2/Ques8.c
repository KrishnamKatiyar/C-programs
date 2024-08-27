#include"stdio.h"
void main(){
	int a,b;
	
	printf("Input first no. : ");
	scanf("%d",&a);
	
	printf("Input second no. : ");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("swapped no. are: %d%d",a,b);
}
