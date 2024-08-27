#include"stdio.h"
void main(){
	int a1,a2,a3,a4,a5,tot;
	float avg,per;
	
	printf("Enter marks of five subjects : ");
	scanf("%d %d %d %d %d",&a1,&a2,&a3,&a4,&a5);
	
	tot= a1+a2+a3+a4+a5;
	avg=tot/5;
	per=tot*100/500;
	
	printf("Total = %d\nAverage = %.1f\nPercentage = %.2f",tot,avg,per);
}
