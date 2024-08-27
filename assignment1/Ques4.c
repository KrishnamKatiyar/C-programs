#include"stdio.h"
int main(){
	float r,v;
	printf("Input the radius of the sphere : ");
	scanf("%f",&r);
	v=4*3.14*r*r*r/3;
	printf("The volume of the sphere is %f.",v);
	
	return 0;
}
