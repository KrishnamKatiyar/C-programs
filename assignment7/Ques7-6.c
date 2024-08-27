#include<stdio.h>

int main()
{
	int a,b,c=1,i=1;
	scanf("%d%d",&a,&b);
	
	while(i<=b)
	{
		c=c*a;
		i++;
	}
	printf("%d",c);
	
	return 0;
	
}
