#include<stdio.h>

int main()
{
	int n , l;
	scanf("%d",&n);
	printf("Entered number is : %d\n",n);
	
	
	l = n%10;
	
	while(n>=10){
		n = n/10;
	}
	
	printf("first digit : %d\n",n);
	printf("last digit : %d\n",l);
	
	int sum = n+l;
	
	printf("Sum of these : %d",sum);
	
	return 0;
}
