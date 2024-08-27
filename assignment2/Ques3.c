#include"stdio.h"
#include"math.h"
void main(){
	int side;
	float area;
	
	printf("Enter side of equilateral triangle : ");
	scanf("%d",&side);
	
	area = (sqrt(3)/4)*(side*side);
	
	printf("Area of equilateral triangle : %.1f sq. units",area);

	
}
