#include"stdio.h"
void main(){
	int d;
	float f,avg;
	
	printf("Input total distance in km : ");
	scanf("%d",&d);
	
	printf("Input total fuel spent in liters : ");
	scanf("%f",&f);
	
	printf("Average cosumption : %.3f",avg=d/f);
}
