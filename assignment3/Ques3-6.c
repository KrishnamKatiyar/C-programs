#include"stdio.h"
void main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	
	printf("Before swap : %d %d ",a,b);
	
	a=a^b;
	b=a^b;
	a=a^b;
	
		
	printf("After swap : %d %d ",a,b);
}
