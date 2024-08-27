#include"stdio.h"
void main()
{
	int n;
	
	printf("Enter number : ");
	scanf("%d",&n);
	
	if(n<0)
	  n=n*(-1);
	  
	printf("%d",n);
}
