#include"stdio.h"
void main(){
	float wt1,wt2,total,avg;
	int p1,p2;
	
	printf("Weight of item 1 : ");
	scanf("%f",&wt1);
	
	printf("No. of item 1 : ");
	scanf("%d",&p1);
	
	printf("Weight of item 2 : ");
	scanf("%f",&wt2);
	
	printf("No.of item 2: ");
	scanf("%d",&p2);
	
	total = (wt1*p1)+(wt2*p2);
	
	avg = total/(p1+p2);
	
	printf("Average Value : %f",avg);
}
