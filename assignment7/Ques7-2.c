#include<stdio.h>

int main()
{
	int n,a,rem,r=0;
	scanf("%d",&n);
	a=n;
	
	while(n)
	{
		rem=n%10;
		n=n/10;
		r=r*10+rem;
	}
	if(r==a)
	 printf("Palindrome");
	else
	  printf("Not Palindrome");
	
	return 0;
	
}
