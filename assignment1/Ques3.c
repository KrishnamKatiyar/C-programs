#include"stdio.h"
int main(){
	int id,wH;
	float sal, Tsal;
	
	printf("Input the Employees ID: ");
	scanf("%d",&id);
	printf("Input the working hrs: ");
	scanf("%d",&wH);
	printf("Salary amount/hr: ");
	scanf("%f",&sal);
	
	Tsal = sal * wH;
	
	printf("Employees ID = %d\nSalary = %.2f\n",id,Tsal);
	
	return 0;
}

