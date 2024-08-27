#include"stdio.h"
#include"math.h"
void main(){
	
	float r,p,ci,R;
	int t;
	
	printf("Enter principl : ");
	scanf("%f",&p);
	
	printf("Enter time : ");
	scanf("%d",&t);
	
	printf("Enter rate : ");
	scanf("%f",&r);
	
	R=(1+r/100);
	ci=pow(R,t);
	ci=ci*p;
	
	printf("Compound Interest = %f",ci);
	
}
