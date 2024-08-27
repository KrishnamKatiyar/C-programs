#include"stdio.h"
int main(){
	float k,m;
	printf("Input kilometers per hour : ");
	scanf("%f",&k);
	
	m = 0.621371*k;
	
	printf("%f miles per hour",m);
	
	return 0;
}
