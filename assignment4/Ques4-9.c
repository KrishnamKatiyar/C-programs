#include"stdio.h"
int main()
{
	int n;
	float b;
	scanf("%d",&n);
	
	if(n<=50){
		b = n*0.50;
	}
	else if(n>50 && n<=150){
		b = 25 +  ((n-50)*0.75);
	}
	else if(n>150 && n<=250){
		b = 25 + 75 + ((n-150)*1.20);
	}
	else{
		b = 25 + 75 + 120 +((n-250)*1.50);
	}
	
	b = b + (b*0.20);
	printf("%.2f",b);
	
	return 0;	
}
