#include<stdio.h>

int main()
{
	int n,prd=1;
	
	scanf("%d",&n);
	
	while(n!=0){
		prd *= n%10;
		n = n/10;
	}
	
	printf("product is %d",prd);
	
	return 0;	
}
