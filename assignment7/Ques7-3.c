#include<stdio.h>

int main()
{
	int n,arr[10]={0},rem,i;
	scanf("%d",&n);
	
	
	while(n)
	{
		rem=n%10;
		n=n/10;
		arr[rem]++;
	}

	for(i=0;i<=9;i++){
		printf("frequency of %d is %d\n",i,arr[i]);
	}
	
	return 0;
	
}
