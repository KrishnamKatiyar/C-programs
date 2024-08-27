#include"stdio.h"
int main()
{
	int n;
	
	printf("Enter a four digit number : ");
	scanf("%d",&n);
	
	while(n>=1)
	{
		printf("%d\n",n%10);
		n=n/10;
	}
}
