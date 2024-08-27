#include"stdio.h"
void main(){
	float f,c;
	
	printf("Input temperature in fahrenheit : ");
	scanf("%f",&f);
	
	c=(f-32)*5/9;
	
	printf("Temperature in celsius is %f",c);
}
