#include"stdio.h"
void main()
{
	int n,a,b;
	
	printf("Enter number : ");
	scanf("%d",&n);
	printf("Enter a specific range : ");
	scanf("%d%d",&a,&b);
	
	if((n>=a)&&(n<=b))
	  printf("Number lies in a specific range");
	else
	  printf("Number does not lies in a specific range");
}
